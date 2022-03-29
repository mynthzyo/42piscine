/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_FOR_print_comb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:13:55 by avilchez          #+#    #+#             */
/*   Updated: 2022/02/21 20:38:47 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	for (int a=0; a<=9; a++)
	{
		for (int b=0; b<=9; b++)
		{
			if (a >= b)
				continue;
            for (int c=0; c<=9; c++)
			{
				if (b >= c)
				{
					continue ;
				}

				if (a == 0 && b == 1 && c == 2)
				{
				}
				else
				{
					write (1, ",", 1);
				}

				char numa=a+'0'; //comvertimos a char añadiendo un caracter 0
				char numb=b+'0';
				char numc=c+'0';

				write(1, &numa, 1);
				write(1, &numb, 1);
				write(1, &numc, 1);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
