/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:46:33 by pudry             #+#    #+#             */
/*   Updated: 2023/06/25 23:07:27 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_add_o_str(char *str);
char	*ft_add_twoo_str(char *str);
char	*ft_add_treeo_str(char *str);
char	*ft_restart_ctype(char *str);
char	*ft_generate_ctype(void);
void	ft_error_dict(void);
void	ft_set_values_initiales(char **ctype, char **ctypeo);

/*this function return the quantity value of character without the end null*/
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

/*This function print the array of string. Without the last space if they
 * are present*/
void	ft_put_array(char **str)
{
	int	j;
	int	iasize;

	iasize = 0;
	while (str[iasize])
		iasize ++;
	if (iasize == 0)
	{
		ft_error_dict();
		return ;
	}
	while (-- iasize >= 0)
	{
		j = 0;
		while (str[iasize][j])
		{
			if (!(!(str[iasize + 1]) && str[iasize][j] == 'x'))
				write(1, &str[iasize][j], 1);
			else
				write(1, &str[iasize][j], 1);
			j ++;
		}
	}
	write(1, "\n", 1);
}

/*this function compare two strings*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i ++;
	if (s1[i] == ' ' && s2[i] == '\0')
		return (0);
	return (1);
}

/*This function calcul the  size of my array with the null value */
int	ft_array_len(char *str, int i )
{
	char	*ctype;
	char	*ctypeo;
	int		istr;

	ft_set_values_initiales(&ctype, &ctypeo);
	istr = ft_strlen(str) - 1;
	while (istr >= 0)
	{
		if (ft_strlen(ctype) == 1 && str[istr - 1] == '1')
		{
			i ++;
			istr -= 2;
			ctype = ft_add_twoo_str(ctype);
		}
		else if (str[istr --] != 0)
			i ++;
		ctype = ft_add_o_str(ctype);
		if (ft_strlen(ctype) == 4 && istr >= 0)
		{
			i ++;
			ctype = ft_restart_ctype(ctype);
			ctypeo = ft_add_treeo_str(ctypeo);
		}
	}
	return (i + 1);
}

/*This function copy a string to an other string*/
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
