/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:29:57 by agomez-c          #+#    #+#             */
/*   Updated: 2022/02/27 22:15:27 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_reiniciar(int solve[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			solve[x][y] = 0;
			y++;
		}
		x++;
	}
}

void	ft_mostrar(int solve[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			printf ("%d ", solve[x][y]);
			y++;
		}
		printf ("\n");
		x++;
	}
}

void	ft_solve(void)
{
	int	solve[4][4];

	ft_reiniciar(solve);
	ft_mostrar (solve);
}
