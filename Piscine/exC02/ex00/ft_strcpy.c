/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:59:33 by pudry             #+#    #+#             */
/*   Updated: 2023/06/09 11:43:41 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
