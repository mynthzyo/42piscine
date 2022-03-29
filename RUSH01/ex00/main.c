/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:24:25 by agomez-c          #+#    #+#             */
/*   Updated: 2022/02/27 22:16:44 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_failures(int colup[], int coldown[], int rowleft[], int rowright[]);
void	ft_solve(void);
int		ft_testini(char *argv[]);

int	main(int argc, char *argv[])
{
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	i;

	if (ft_testini(argv))
		return (0);
	i = 0;
	argc = argc + 0;
	while (i < 4)
	{
		colup[i] = argv[1][i * 2] - 48;
		coldown[i] = argv[1][i * 2 + 8] - 48;
		rowleft[i] = argv[1][i * 2 + 16] - 48;
		rowright[i] = argv[1][i * 2 + 24] - 48;
		i++;
	}
	if (ft_failures(colup, coldown, rowleft, rowright))
		return (0);
	ft_solve();
	return (0);
}
