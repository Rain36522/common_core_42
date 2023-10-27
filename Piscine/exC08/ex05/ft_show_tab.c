/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:54:43 by pudry             #+#    #+#             */
/*   Updated: 2023/06/26 17:03:36 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	int	conv;

	conv = nb + 48;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
		write (1, &conv, 1);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		++ i;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i ++;
	}
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
	ft_show_tab(tab);
	return (tab);
}

int	main(int arg_i, char **string)
{
	struct s_stock_str	*ptr;
	int	i;

	ft_strs_to_tab(arg_i, string);
	i = 0;
	return (0);
}

