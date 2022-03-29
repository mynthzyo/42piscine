/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_failures.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:36:14 by agomez-c          #+#    #+#             */
/*   Updated: 2022/02/27 22:11:59 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(int colup[], int coldown[], int rowleft[], int rowright[])
{
	int	r;
	int	u;
	int	sum;

	u = 0;
	r = 0;
	sum = 0;
	while (r < 4)
	{
		if ((colup[r] + coldown[r]) < 3 || (colup[r] + coldown[r]) > 5)
		{
			return (1);
		}
		if ((rowleft[r] + rowright[r]) < 3 || (rowleft[r] + rowright[r]) > 5)
		{
			return (1);
		}
		sum = sum + colup[r] + coldown[r] + rowleft[r] + rowright[r];
	r++;
	}
	if (sum < 32 || sum > 34)
	{
		return (1);
	}
	return (0);
}

int	ft_count_ones(int colup[], int coldown[], int rowleft[], int rowright[])
{
	int	r;
	int	u;

	u = 0;
	r = 0;
	while (r < 4)
	{
		if (colup[r] == 1)
			u++;
		if (coldown[r] == 1)
			u++;
		if (rowleft[r] == 1)
			u++;
		if (rowright[r] == 1)
			u++;
	r++;
	}
	if (u != 4)
	{
		return (1);
	}
	return (0);
}

int	ft_count_ones_array(int arraytest[])
{
	int	r;
	int	u;
	int	c;

	u = 0;
	r = 0;
	c = 0;
	while (r < 4)
	{
		if (arraytest[r] == 1)
			u++;
		if (u > 1)
			return (1);
		if (arraytest[r] == 4)
			c++;
		if (c > 1)
			return (1);
	r++;
	}
	return (0);
}

int	ft_failures(int colup[], int coldown[], int rowleft[], int rowright[])
{
	int	error;

	error = 0;
	error = error + ft_count_ones(colup, coldown, rowleft, rowright);
	error = error + ft_count_ones_array(colup);
	error = error + ft_count_ones_array(coldown);
	error = error + ft_count_ones_array(rowleft);
	error = error + ft_count_ones_array(rowright);
	error = error + ft_check(colup, coldown, rowleft, rowright);
	if (error > 0)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	return (0);
}
