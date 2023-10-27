/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:40:46 by pudry             #+#    #+#             */
/*   Updated: 2023/06/28 13:10:33 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free (array[i ++]);
	free (array);
}

void	ft_put_array(struct map array)
{
	int	i;
	int	j;

	j = 0;
	while (array.a[j])
	{
		i = 0;
		while (array.a[j][i])
		{
			write(1, &array.a[j][i], 1);
			i ++;
		}
		j ++;
	}
	ft_free(array.a);
}

void	ft_write_sq(struct max_sq smax_sq, struct map array)
{
	int	i;
	int	j;

	j = 0;
	while (j < smax_sq.size && array.a[smax_sq.posl + j])
	{
		i = 0;
		while (i < smax_sq.size
			&& array.a[smax_sq.posl + j][smax_sq.posc + i] == array.v)
		{
			array.a[smax_sq.posl + j][smax_sq.posc + i] = array.p;
			i ++;
		}
		if (i < smax_sq.size)
		{
			write (1, "Error\n", 6);
			ft_free(array.a);
			return ;
		}
		j ++;
	}
	if (smax_sq.size == 0 && array.a[0][0] == array.v)
		array.a[0][0] = array.p;
	ft_put_array(array);
}
