/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:57:38 by pudry             #+#    #+#             */
/*   Updated: 2023/06/28 12:52:32 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		ft_arraylen(char **array);
int		ft_strlen(char *array);
void	ft_write_sq(struct max_sq smax_sq, struct map array);

struct max_sq	ft_cmp(int sq_size, int posl, int posc, struct max_sq smax_sq)
{
	if (sq_size > smax_sq.size)
	{
	smax_sq.size = sq_size;
	smax_sq.posl = posl;
	smax_sq.posc = posc;
	}
	return (smax_sq);
}

struct max_sq	cal(struct map arr, struct max_sq smax_sq, int posl, int posc)
{
	int	i;
	int	j;
	int	sq_size;

	j = 0;
	i = 0;
	sq_size = 0;
	while (j >= sq_size && i >= sq_size)
	{
		++ sq_size;
		j = 0;
		while (j < sq_size && arr.a[posl + j])
		{
			i = 0;
			while (i < sq_size && arr.a[posl + j][posc + i] == arr.v)
				i ++;
			if (i < sq_size)
				break ;
			j ++;
		}
	}
	return (ft_cmp(sq_size - 1, posl, posc, smax_sq));
}

void	travel(struct map arr, struct max_sq smax_sq, int imaxc, int imaxl)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < imaxl - smax_sq.size)
	{
		i = 0;
		while (i < imaxc - smax_sq.size)
		{
			smax_sq = cal(arr, smax_sq, j, i);
			i ++;
		}
		j ++;
	}
	ft_write_sq(smax_sq, arr);
}

void	ft_init_solve(struct map array)
{
	int				imaxc;
	int				imaxl;
	struct max_sq	smax_sq;

	imaxl = ft_arraylen(array.a) - 1;
	imaxc = ft_strlen(array.a[0]);
	smax_sq.posc = 0;
	smax_sq.posl = 0;
	smax_sq.size = 0;
	travel(array, smax_sq, imaxc, imaxl);
}
/*
int	main(int arg_n, char **arg_v)
{
	struct map	array;
	
	(void) arg_n;
	array.v = '.';
	array.o = 'o';
	array.p = 'X';
	array.a = arg_v;

	ft_init(array);
	return (0);
}*/
