/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 10:36:06 by cterrill          #+#    #+#             */
/*   Updated: 2017/06/14 10:50:07 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/fillit.h"

int	main(int argc, char **argv)
{
	char	**pieces;

	if (argc <= 1)
		ft_putstr("Specify a file, you ingrate.");
	else
	{
		pieces = readpieces(argv);
	}
	return (0);
}	
