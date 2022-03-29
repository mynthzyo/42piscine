/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:56:22 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/06 19:58:35 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

struct s_linea
{
	char	num[50];
	char	desc[100];
};

char	*fillfield(char *dest, char *src, unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (src[size] && size < n)
	{
		dest[size] = src[size];
		size++;
	}
	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}

void	fillstruct(int fd, struct s_linea *s_ln)
{
	int				il;
	int				in;
	char			buffer;
	unsigned int	size;

	il = 0;
	in = 0;
	while (read(fd, &buffer, 1) == 1)
	{
		if ((buffer - 48) < 0 || (buffer - 48) > 9)
		{
			if (buffer == '\n')
			{
				il++;
				in = 0;
			}
		}
		else
		{
			//fillfield(s_ln[il].num[in], buffer, 1);
			in++;
		}
	}
}

int	ft_fill(int argc, char *argv[])
{
	while (i < 20)
	{
		fillfield(linea_ptr[i].num, i + '0', 50);
	}
	return (0);
	//linea_ptr = (struct s_linea*)malloc(lt * sizeof(struct s_lineas));
	//fillstruct(fd, linea_ptr);
}

