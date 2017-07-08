/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maincopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 10:36:06 by cterrill          #+#    #+#             */
/*   Updated: 2017/06/27 14:54:00 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "fillit.h"
#include <libft.h>

void        fillit_init(void);
char	**read_pieces(const char *path);

int     main(int argc, char **argv)
{
    const char  *mypath;

    mypath = argv[1];

	if (argc <= 1)
		ft_putstr("Specify a file, you ingrate!\n");
	else
	{
		fillit_init();
        read_pieces(mypath);
	}
	return (0);
}

void	fillit_init()
{
	//static short	map_size;
	//static unsigned short	grid[16][16];
    //static char    **pieces;
}