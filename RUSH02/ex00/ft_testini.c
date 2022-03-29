/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testini.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:56:22 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/06 19:50:06 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_testini(int argc, char *argv[])
{
	int	i;

	if (argc > 3 || argc == 1)
	{
		write(2, "Error Parametros\n", 16);
		return (1);
	}
	if (argv[2] == NULL)
		argv[2] = "numbers.dict";
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (((argv[1][i] - 48) < 0 || (argv[1][i] - 48) > 9))
		{
			if (argv[1][i] != 32)
			{
				write(2, "Error Entrada\n", 13);
				return (1);
			}
		}
		i++;
	}
	return (0);
}
