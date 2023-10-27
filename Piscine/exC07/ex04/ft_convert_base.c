/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b10_to_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:18:55 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 08:53:57 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_putnbr(long int nb, char *str_base, int base)
{	
	int		i;
	char	*str;
	int		nbr;

	i = 0;
	nbr = nb;
	while (nb >= 0 && nb < base)
	{
		nb = nb / base;
		i ++;
	}
	str = malloc(sizeof(char) * (i + 1));
	str[i + 1] = '\0';
	while (nbr >= 0 && nb < base)
	{
		str[i] = str_base[nbr % base];
		nbr = nbr / base;
		i --;
	}
}

int	is_same(char *base, char c, int i)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (base[j] == c && j != i)
			return (0);
			j++;
	}
	return (1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	if (!(base) || i == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (is_same(base, base[i], i) == 0)
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == 45 || base[i] == 43)
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			ibase;
	long int	nb;

	nib = nbr;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	ibase = check_base(base);
	if (ibase)
		ft_putnbr(nb, base, ibase);
}
/*
int	main(void)
{
	char	cbase[] = "ckfyuo ";
	int		nb = 2122327;
	char	*ptr;

	ptr = cbase;
	ft_putnbr_base(nb, ptr);
	write(1, "\n", 1);
	return (0);
}
*/
