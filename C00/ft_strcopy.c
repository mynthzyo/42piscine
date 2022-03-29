/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:18:15 by avilchez          #+#    #+#             */
/*   Updated: 2022/02/28 21:08:48 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*mi_copiacadena(char *destino, char *origen)
{
	char	*p;

	p = destino;
	while (*origen != '\0')
	{
		*p++ = *origen++;
	}
	*p = '\0';
	return (destino);
}

int	main(void)
{
	int		i;
	char	*strb;
	char	*stra;

	i = 0;
	stra = "Aitormenta";
	strb = "\0";
	mi_copiacadena(strb, stra);
	while (strb[i])
	{
		printf("%d", strb[i]);
		i++;
	}
}
