/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:07:00 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/01 17:35:47 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printeanbr(int number, int digits)
{
	int		i;
	char	array_number[12];

	i = 0;
	array_number[digits] = '\0';
	while (i < digits - 1)
	{	
		array_number[digits - i -1] = number % 10 + '0';
		number = number / 10;
		i++;
	}
	i = 0;
	while (i < digits)
	{	
		ft_putchar(array_number[i + 1]);
		i++;
	}	
}

int	digitos(int cnb)
{
	int	cociente;
	int	divisor;
	int	contador;

	cociente = 0;
	divisor = 1;
	contador = 0;
	while (cociente != 1)
	{
		contador++;
		divisor = divisor * 10;
		cociente = cnb / divisor;
		if (cociente < 1)
			cociente = 1;
		if (cociente == 1)
			contador++;
		if (cnb < 10)
		{
			contador = 1;
			return (contador);
		}
	}
	return (contador);
}

void	ft_putnbr(int nb)
{
	int	total;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{	
		if (nb < 0)
		{
			nb = nb * -1;
			write (1, "-", 1);
		}
		total = digitos(nb);
		ft_printeanbr(nb, total);
	}
}
