/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:22:56 by pudry             #+#    #+#             */
/*   Updated: 2023/06/29 15:48:47 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_in_charset(char c, char *charset)
{
	while (*charset && c != *charset)
		charset ++;
	if (c == *charset)
		return (1);
	return (0);
}

int	ft_array_len(char *str, char *charset)
{
	int	i;
	
	i = 0;
	while (*str)
	{
		while (*str && ft_in_charset(*str, charset) == 0)
			str ++;
		while (*str && ft_in_charset(*str, charset) == 1)
			str ++;
		i ++;
	}
	return (i);
}

char	**ft_write_array(char *str, char *charset, char **array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (*str)
	{
		j = 0;
		while (str[j] && ft_in_charset(str[j], charset) == 0)
			j ++;
		array[i] = malloc(sizeof(char) * (j + 1));
		array[i][j] = '\0';
		k = 0;
		while (k < j)
		{
			array[i][k] = *str;
			k ++;
			str ++;
		}
		while (*str && ft_in_charset(*str, charset) == 1)
			str ++;
		i ++;
	}
	return (array);
}


char	**ft_split(char *str, char *charset)
{
	int	iarray;
	char **array;
	if (!(str))
		return (0);
	else if (*str && !(*charset))
	{
		array = malloc(sizeof(char) * 2);
		array[0] = str;
		array[1] = 0;
		return (array);
	}
	iarray = ft_array_len(str, charset) + 1;
	array = malloc(sizeof(char) * (iarray + 1));
	array[iarray] = 0;
	while (str && ft_in_charset(*str, charset) == 1)
		str ++;
	array = ft_write_array(str, charset, array);
	return (array);
}
/*
int	main(int nb, char **v)
{
	int	i;
	char **array;

	(void) nb;
	array = ft_split(v[1], v[2]);
	//ft_split("", "");
	i = 0;
	
	while (array[i])
	{
		printf("arr : %s\n", array[i]);
		i ++;
	}
	return (0);
}*/
