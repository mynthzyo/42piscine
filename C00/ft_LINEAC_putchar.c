/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_LINEAC_putchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:18 by avilchez          #+#    #+#             */
/*   Updated: 2022/02/27 16:33:06 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//Version introduciendo el parametro por linea de comando
/*int main (int argc, char *argv[]) 
{
char enunciado[31]:	
enunciado = *argv[1][0];

argc=argc+0; //como el compilador da error si no se usa argc la uso sumandole 0
ft_putchar(argv[1][0]);
return 0;
}*/

int	main(void)
{
	ft_putchar('A');
	return (0);
}
