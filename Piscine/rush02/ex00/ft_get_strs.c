/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_strs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanzi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:01:09 by ahanzi            #+#    #+#             */
/*   Updated: 2023/06/25 22:54:50 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_specials_line(char cnbr, char *file_arr);
int		ft_tens_line(char cnbr, char *file_arr);
int		ft_nbr_line(char cnbr, char *file_arr);
int		ft_type_line(char ctype, char *file_arr);
int		ft_strlen(char	*str);
char	*ft_if_unit(char *nbr_str);
char	*ft_if_type(char *type_str);
char	*ft_two_str(char *nbr_str, char *type_str);

/* This function appends the strings corresponding to the number and
 * the type (if the type > 10) in a dynamic array. */
char	*ft_append(char *nbr_str, char *type_str)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	i = 0;
	j = 0;
	str = 0;
	if (type_str == 0)
	{
		str = ft_if_unit(nbr_str);
		return (str);
	}
	else if (nbr_str == 0)
	{
		str = ft_if_type(type_str);
		return (str);
	}
	else
	{
		str = ft_two_str(nbr_str, type_str);
		return (str);
	}		
	return (str);
}

char	*ft_copy_str(char *file_arr, int i, int j)
{
	int		k;
	char	*str;

	k = 0;
	str = (char *)malloc(sizeof(char) * (j + 1));
	while (j > 0)
	{
		str[k] = file_arr[i - j];
		k++;
		j--;
	}
	str[k] = '\0';
	return (str);
}

/* This function gets the string associated to the nbr line using \n 
 * to count the lines passed and colon to get to the value side of 
 * file_arr. The length of the string is counted to create a dynamic 
 * array in which the string is copied. */
char	*ft_get_nbr_str(char *file_arr, int in_line)
{
	unsigned int		i;
	unsigned int		j;
	char				*nbr_str;

	i = 0;
	j = 0;
	while (in_line > 0)
	{
		if (file_arr[i] == '\n')
			in_line--;
		i++;
	}
	while (file_arr[i] != ':')
		i++;
	while (file_arr[i] == ':' || file_arr[i] == ' ')
		i++;
	while (file_arr[i] != '\n')
	{
		i++;
		j++;
	}
	nbr_str = ft_copy_str(file_arr, i, j);
	return (nbr_str);
}

/* This function gets the string associated to the type line using \n
 * to count the lines passed and colon to get to the value side of
 * file_arr. The length of the string is counted to create a dynamic
 * array in which the string is copied. */
char	*ft_get_type_str(char *file_arr, int it_line)
{
	unsigned int		i;
	unsigned int		j;
	char				*type_str;

	i = 0;
	j = 0;
	while (it_line > 0)
	{
		if (file_arr[i] == '\n')
			it_line--;
		i++;
	}
	while (file_arr[i] != ':')
		i++;
	while (file_arr[i] == ':' || file_arr[i] == ' ')
		i++;
	while (file_arr[i] != '\n')
	{
		i++;
		j++;
	}
	type_str = ft_copy_str(file_arr, i, j);
	return (type_str);
}

/* This function calls ft_get_nbr_str and, only if the type line > 0, calls
 * ft_get_type_str. Their return values are used to call ft_append whose return
 * value gets returned. */
char	*ft_get_strs(char *file_arr, int in_line, int it_line, char *ctype)
{
	char	*type_str;
	char	*nbr_str;
	char	*str;

	nbr_str = 0;
	type_str = 0;
	if (in_line < 0)
		type_str = ft_get_type_str(file_arr, it_line);
	else if (in_line >= 0)
	{
		nbr_str = ft_get_nbr_str(file_arr, in_line);
		if (ft_strlen(ctype) > 2)
			type_str = ft_get_type_str(file_arr, it_line);
	}	
	str = ft_append(nbr_str, type_str);
	return (str);
}
