/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:44:55 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/10 11:57:09 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	size;

	size = argc - 1;
	if (size >= 1)
	{
		while (size > 0)
		{
			ft_rev_params(argv[size]);
			size--;
		}
	}
	return (0);
}
