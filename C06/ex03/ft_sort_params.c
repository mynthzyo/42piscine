/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:04:33 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/10 15:52:47 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_swapstr(char *strA, char *strB)
{
	char	t;
	char	*temp;

	temp = &t;
	ft_strcpy(temp, strA);
	ft_strcpy(strA, strB);
	ft_strcpy(strB, temp);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	if (argc == 1)
		return (0);
	ft_swapstr(argv[1], argv[2]);
	while (count < argc)
	{
		ft_print_params(argv[count]);
		count++;
	}
	return (0);
}
