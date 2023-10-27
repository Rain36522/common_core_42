/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:15:59 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 13:02:10 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Cette fonction calcul la longueur total de mon string final
int	ft_atotal_len(int size, char **strs, char *sep)
{
	int		i;
	int		itotal_value;

	i = 0;
	itotal_value = 1;
	while (i < size)
	{
		itotal_value += ft_strlen(strs[i]);
		i ++;
	}
	itotal_value += ft_strlen(sep) * (i -1);
	return (itotal_value);
}

//Cette fonction va copier les caracteres dans notre string
char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	isize;

	i = 0;
	isize = 0;
	while (*src != '\0')
	{
		++ isize;
	++ src;
	}
	src -= isize;
	while (i < isize)
	{
		*dest = *src;
		++ src;
		++ dest;
		++ i;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ia_size;
	int		i;
	char	cstr[1];
	char	*ctot_str;
	char	*cmem_str;

	ctot_str = cstr;
	if (!(strs) || !(sep) || size <= 0)
		return (0);
	ia_size = 0;
	i = 0;
	ia_size = ft_atotal_len(size, strs, sep);
	ctot_str = malloc(sizeof(char) * ia_size);
	cmem_str = ctot_str;
	while (size - i > 0)
	{
		ctot_str = ft_strcpy(ctot_str, strs[i]);
		i ++;
		if (size - i > 0)
			ctot_str = ft_strcpy(ctot_str, sep);
	}
	*ctot_str = '\0';
	return (cmem_str);
}
/*
int	main(int arg_n,char **arg_v)
{
	int		size = arg_n;
	char	*sep = arg_v[1];

	sep = ft_strjoin(size, arg_v, sep);
	printf("\n%s\n\n", sep);
	return (0);
}*/
