/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:30:00 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/09 11:23:13 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	ls;
	unsigned int	ld;

	n = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size <= ld || size < 1)
		return (ls + size);
	while (src[n] && (n < (size - ld - 1)))
	{
		dest[ld + n] = src[n];
		n++;
	}
	dest[ld + n] = '\0';
	return (ld + ls);
}
