/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduffaut <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:39 by cduffaut          #+#    #+#             */
/*   Updated: 2023/06/25 22:53:57 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str);

char	*ft_if_unit(char *nbr_str)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(nbr_str) + 2));
	while (nbr_str[i])
	{
		str[i] = nbr_str[i];
		i++;
	}
	str[i] = ' ';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_if_type(char *type_str)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(type_str) + 2));
	while (type_str[i])
	{
		str[i] = type_str[i];
		i++;
	}
	str[i] = ' ';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_str_end(char *src, char *dest, int i, int j)
{
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = ' ';
	dest[j + 1] = '\0';
	return (dest);
}

char	*ft_two_str(char *nbr_str, char *type_str)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	len = ft_strlen(nbr_str) + 1 + ft_strlen(type_str);
	str = (char *)malloc(sizeof(char) * (len + 2));
	while (nbr_str[i])
	{
		str[j] = nbr_str[i];
		j++;
		i++;
	}
	i = 0;
	str[j] = ' ';
	j++;
	str = ft_str_end(type_str, str, i, j);
	return (str);
}
