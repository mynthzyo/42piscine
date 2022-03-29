/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:12:04 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/03 15:48:52 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tempo;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
		{
			tempo = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tempo;
			if (i > 0)
			i--;
		}
		else
		{
			i++;
		}
	}
}
