/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:01:41 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/08 18:40:58 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;
	int				dif;

	i = 0;
	if (ft_strlen(s1) < ft_strlen(s2))
	{
		size = ft_strlen(s2);
	}
	else
	{
		size = ft_strlen(s1);
	}
	while (i < n && i < size)
	{
		if (s1[i] != s2[i])
		{
			dif = (s1[i] - s2[i]);
			return (dif);
		}
		i++;
	}
	return (0);
}
