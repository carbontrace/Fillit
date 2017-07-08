/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:07:21 by cterrill          #+#    #+#             */
/*   Updated: 2017/06/14 10:26:03 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FILLIT_H
# define FILLIT_H

# include "../includes/libft/libft.h"
# include <stdio.h>
# include <fcntl.h>

# define MAX 255

typedef struct 		s_grid
{
	unsigned char	x;
	unsigned char	y;
	int				filled;
}					t_grid;

typedef struct		s_map
{
	unsigned char	cols;
	unsigned char	rows;
	t_grid			**grid;
}					t_map;

typedef struct s_mino
{
	unsigned char	x;
	unsigned char	y;
	unsigned char	type;
}					t_mino;

# endif
