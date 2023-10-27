/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:14:31 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 08:54:10 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power -1));
}

/*This function return a number with  the sign + or -.
 * They took the information by the pointer given.
 * After that the charact are convert to an int value
 * and returned.*/

int	ft_basen_to_base10(char *str, char *base, int ibase)
{
	int	i;
	int	j;
	int	isize;
	int	ivalue;

	isize = 0;
	i = 0;
	ivalue = 0;
	while (str[isize])
		isize ++;
	while (i < isize)
	{
		j = 0;
		while (str[i] != base[j] && base[j])
			j ++;
		if (base[j] != str[i])
			break ;
		else
		{
			ivalue += j * ft_recursive_power(ibase, isize - i - 1);
		}
		i ++;
	}
	return (ivalue);
}

int	ft_atoi_base(char *str, char *base)
{
	int		iminus;
	int		ivalue;
	int		ibase;

	ivalue = 0;
	iminus = 1;
	ibase = check_base(base);
	if (!(*str) || ibase == 0)
		return (0);
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str ++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			iminus *= -1;
		++ str;
	}
	ivalue = ft_basen_to_base10(str, base, ibase) * iminus;
	return (ivalue);
}
/*
int	main(int arg_n, char **arg_v)
{
	(void) arg_n;
	printf("Value : %d\n", ft_atoi_base(arg_v[1], arg_v[2]));
	return (0);
}
*/	
