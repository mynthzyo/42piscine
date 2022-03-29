/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <dilopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:03:04 by dilopez-          #+#    #+#             */
/*   Updated: 2022/03/09 13:54:09 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_params(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*arguments[argc - 1];
	char	*temp[1];

	i = 0;
	k = 0;
	j = 1;
	arguments[0] = argv[0];
	while (j < argc)
	{
		while (arguments[k] && temp[0] == "\0")
		{
			if (arguments[k + 1] == '\0')
				arguments[i] = argv[j];
			else if (ft_strcmp(arguments[k], argv[i]) < 0)
			{
				temp[0] = arguments[k];
				arguments[k] = argv[i];
				arguments[k + 1] = temp[0];
			}
		}
		printf("arguments: %s\n", arguments[i]);
		temp[0] = "";
		k = 0;
		i++;
		j++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while ((s1[i] || s2[i]) && result == 0)
	{
		if (s1[i] > s2[i])
			result = 1;
		else if (s1[i] < s2[i])
			result = -1;
		i++;
	}
	return (result);
}
