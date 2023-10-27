/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictio_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduffaut <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:19:13 by cduffaut          #+#    #+#             */
/*   Updated: 2023/06/28 19:07:19 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_struct.h"

char	**ft_split(char *str, char *charset);
int		ft_strlen_end(char *array);

int	size_dictio(char *txt)
{
	int		ifd;
	int		iread;
	int		istr_size;
	char	*buf;

	istr_size = 1;
	ifd = open(txt, O_RDONLY);
	if (ifd <= 0)
		return (0);
	buf = malloc(sizeof(char));
	iread = read(ifd, buf, 1);
	while (iread > 0)
	{
		iread = read(ifd, buf, 1);
		istr_size++;
		if (*buf == '\n')
			*buf = 'A';
	}
	close(ifd);
	if (iread == 0)
		return (istr_size);
	return (0);
	free(buf);
}

/*Create a string of the txt*/

char	*crea_tab(char *txt)
{
	char	*buf;
	int		isize;
	int		ifd;
	int		iread;

	isize = size_dictio(txt);
	ifd = open (txt, O_RDONLY);
	if (ifd <= 0)
		return (0);
	buf = malloc(sizeof(char) * (isize + 1));
	if (malloc(sizeof(char) * isize) == 0)
		return (0);
	buf[isize + 1] = '\0';
	iread = read(ifd, buf, isize);
	close(ifd);
	ifd = 0;
	return (buf);
}

/* Fuctions that take the variables and the split result */
struct map	crea_strut(char *txt)
{
	char		*buff;
	struct map	init;

	buff = crea_tab(txt);
	if (!buff)
	{
		buff = malloc(sizeof(char) * ft_strlen_end(txt));
		buff = txt;
		if (ft_strlen_end(buff) <= 5 && buff[5] != '\n')
		{
			init.a = 0;
			return (init);
		}
	}	
	init.v = buff[1];
	init.o = buff[2];
	init.p = buff[3];
	while (*buff != '\n')
		buff ++;
	buff ++;
	init.a = ft_split(buff, "\n");
	return (init);
}
