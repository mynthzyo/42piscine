/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable copy.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:08:33 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/02 20:49:00 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(int hexnum);

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[40] = "¿Coucou\ntu vas bien ?\t";

	ft_putstr_non_printable(str);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	it;

	it = 0;
	while (str[it] != '\0')
	{
		if ((str[it] >= 00 && str[it] <= 31) || (str[it] == 127))
		{
			write (1, "\\", 1);
			ft_hexa(str[it]);
		}
		else
		{
			write(1, &str[it], 1);
		}
		it++;
	}
}

void	ft_hexa(int num)
{
	char	hexa[2];

	hexa[0] = num / 16 + 48;
	write(1, &hexa[0], 1);
	hexa[1] = num % 16;
	if (hexa[1] >= 10)
	{
		hexa[1] = hexa[1] + 87;
		write(1, &hexa[1], 1);
	}
	else
	{
		hexa[1] = num % 16;
		write(1, &hexa[1], 1);
	}
}
