/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:59:33 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 10:00:04 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
//i#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	int		isize;

	i = 0;
	isize = 0;
	while (*src != '\0')
	{
		++ isize;
		++ src;
	}
	src -= isize;
	isize ++;
	while (i <= isize)
	{
		*dest = *src;
		++ src;
		++ dest;
		++ i;
	}
	dest -= i;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *) malloc(sizeof(src));
	if (!(char *) malloc(sizeof(src)))
		return (0);
	dest = ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char *src = "";

	printf("L'original: %s\n", strdup(src));
	printf("La copie  : %s\n", ft_strdup(src));
	return (0);
}
*/
