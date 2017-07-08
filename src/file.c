/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 09:46:08 by cterrill          #+#    #+#             */
/*   Updated: 2017/06/14 10:50:31 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int     ft_filesize(char *file)
{
    int     i;
    int     fd;

    // *  open the file in read only mode to a file descriptor variable (int);
    // *   check that the file isn't invalid (read returns a -1 if it is)
    if ((fd = open(file, O_RDONLY) < 0))
        return (-1);
    // *  read through the file char by char
    while (read(fd, &buf, 1) != '\0')
    {
        // ensure that only valid chars are accepted ('.', '#', '\n')
        if (buf != '.' && buf != '#' && buf != '\n')
            return (-1); // if not, return (-1);
        i++; // we are going to increment to get the size (duh) and also
    }
    close(fd);
    // *   close file
    // *   check finally that the file is not bigger than the possible max
    if (i > 545)
        return (-1);
    //      26 tetriminos each with 4 lines of 5 chars (including newline) and \n
    //       inbetween: 26 * (4 + 1) + 25 = 545;
    // *   else, return 0
    else
        return (i);
}

char    *ft_readfile(char *file)
{
    // file descriptor
    //
    int     fd;
    char    *string;
    int     size;

    if ((size = ft_size(file)) <= 0)
        return (NULL);
    if (string = ft_strnew(string) == NULL)
        return (NULL);
    fd = open(file, O_RDONLY);
    read(fd, string, size);
    close(fd);
    // ADD EDGE CASE FOR STARTING WITH A VALID TETRI CHAR
    return (string);
}

char	**read_pieces(char *file)
{
	int				file;
	static char		**pieces;
	static void		*buffer;
	size_t			buf_size;
	size_t			file_length;

    pieces = 0;
	buffer = 0;
	buf_size = 1024;
	
	if (!(file = open(path, O_RDONLY)))
		ft_putstr("Error reading file!");
	else
	{
		file_length = read(file, buffer, buf_size);
		pieces = ft_strsplit(buffer, '\n');
		while (**pieces != '\0')
			ft_putchar(**pieces);
	}
	return (pieces);
}*/



