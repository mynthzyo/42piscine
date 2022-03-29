/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:56:22 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/06 18:34:34 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fillfield(char *dest, char *src, unsigned int n);
void	fillstruct(int fd, struct s_linea *s_ln);
int	ft_fill(int argc, char *argv[]);
