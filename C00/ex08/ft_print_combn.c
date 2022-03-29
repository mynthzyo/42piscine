/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:44:46 by avilchez          #+#    #+#             */
/*   Updated: 2022/02/28 16:34:19 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	consoleprint(int a, int b, int c)
{
	if (a == 0 && b == 1 && c == 2)
	{
	}
	else
	{
		write (1, ",", 1);
	}
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;
	int	c;
    char    num[10];

	a = 0;
    num
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				//consoleprint (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}