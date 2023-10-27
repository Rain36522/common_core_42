/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:54:43 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 16:01:32 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *src, char *dest)
{
	int		i;
	int		isize;

	i = 0;
	isize = 0;
	while (src[isize])
		++ isize;
	while (i <= isize)
	{
		dest[i] = src[i];
		++ i;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(struct s_stock_str) * (1 + ac));
	if (!(malloc(sizeof(struct s_stock_str) * (1 + ac))))
		return (0);
	while (i < ac)
	{
		tab[i].size = (int) malloc(sizeof(int));
		tab[i].str = malloc(sizeof(char) * (ft_strlen(av[i])));
		tab[i].copy = malloc(sizeof(char) * (ft_strlen(av[i])));
		tab[i].str = av[i];
		ft_strcpy(av[i], tab[i].copy);
		tab[i].size = ft_strlen(av[i]);
		i ++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

int	main(int arg_i, char **string)
{
	struct s_stock_str	*ptr;
	int	i;

	ptr = ft_strs_to_tab(arg_i, string);
	i = 0;
	while (i <= arg_i)
	{
		printf(" nb : %d,	str : %s,			copy : %s\n", ptr[i].size, 
		ptr[i].str, ptr[i].copy);
		i ++;
	}
	return (0);
}

