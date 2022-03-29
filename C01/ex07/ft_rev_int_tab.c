/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:23:54 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/02 17:08:24 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tempo;
	int	numit;

	i = 0;
	numit = size / 2;
	while (i < numit)
	{
		tempo = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tempo;
		i++;
	}
}
