/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_3_by_header.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:51:29 by pudry             #+#    #+#             */
/*   Updated: 2023/06/18 21:09:58 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_place_free(char array[6][6], char nb, int pos_c, int pos_l);

int	ft_place_3_by_header_up(char array[6][6])
{
	int	icount;
	int	ipossible;
	int	i;

	icount = 0;
	i = 1;
	while (i < 5)
	{
		if (ft_place_free(array, '3', i, 1) == 1 && array[0][i] != '3')
		{
			icount ++;
			ipossible = i;
		}
		i ++;
	}
	if (icount == 1)
	{
		array[1][ipossible] = '3';
		return (1);
	}
	return (0);
}

int	ft_place_3_by_header_down(char array[6][6])
{
	int	icount;
	int	ipossible;
	int	i;

	icount = 0;
	i = 1;
	while (i < 5)
	{
		if (ft_place_free(array, '3', i, 4) == 1 && array[5][i] != '3')
		{
			icount ++;
			ipossible = i;
		}
		i ++;
	}
	if (icount == 1)
	{
		array[4][ipossible] = '3';
		return (1);
	}
	return (0);
}

int	ft_place_3_by_header_left(char array[6][6])
{
	int	icount;
	int	ipossible;
	int	i;

	icount = 0;
	i = 1;
	while (i < 5)
	{
		if (ft_place_free(array, '3', 1, i) == 1 && array[i][0] != '3')
		{
			icount ++;
			ipossible = i;
		}
		i ++;
	}
	if (icount == 1)
	{
		array[ipossible][1] = '3';
		return (1);
	}
	return (0);
}

int	ft_place_3_by_header_right(char array[6][6])
{
	int	icount;
	int	ipossible;
	int	i;

	icount = 0;
	i = 1;
	while (i < 5)
	{
		if (ft_place_free(array, '3', 4, i) == 1 && array[i][5] != '3')
		{
			icount ++;
			ipossible = i;
		}
		i ++;
	}
	if (icount == 1)
	{
		array[ipossible][4] = '3';
		return (1);
	}
	return (0);
}
