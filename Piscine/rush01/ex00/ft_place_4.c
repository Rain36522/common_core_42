/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:56:11 by pudry             #+#    #+#             */
/*   Updated: 2023/06/18 17:28:29 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function will check if we have 1 at the beginning. If that's the case, 
 * it will place a 4 in front.*/

#include <stdio.h>

void	ft_put_1234_up(char array[6][6], int place);
void	ft_put_1234_down(char array[6][6], int place);
void	ft_put_1234_left(char array[6][6], int place);
void	ft_put_1234_right(char array[6][6], int place);
int		ft_cnt_nb(char array[6][6], char nb);
int		ft_place_free(char array[6][6], char nb, int pos_c, int pos_l);
void	ft_place_last4(char array[6][6]);

void	ft_place_4(char array[6][6])
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (array[0][i] == '1' && !(array[1][i]))
		{
			array[1][i] = '4';
		}
		if (array[5][i] == '1' && !(array[4][i]))
		{
			array[4][i] = '4';
		}
		if (array[i][0] == '1' && !(array[i][1]))
		{
			array[i][1] = '4';
		}
		if (array[i][5] == '1' && !(array[i][4]))
		{
			array[i][4] = '4';
		}
		i ++;
	}
}

void	ft_place_1234(char array[6][6])
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (array[0][i] == '4')
		{
			ft_put_1234_up(array, i);
		}
		if (array[5][i] == '4')
		{
			ft_put_1234_down(array, i);
		}
		if (array[i][0] == '4')
		{
			ft_put_1234_left(array, i);
		}
		if (array[i][5] == '4')
		{
			ft_put_1234_right(array, i);
		}
		i ++;
	}
}

int	ft_missing2_4(char array[6][6])
{
	int	i;

	i = 2;
	while (i < 4)
	{
		if (array[0][i] == '3' && !(array[3][i]))
			array[3][i] = '4';
		else if (array[5][i] == '3' && !(array[2][i]))
			array[2][i] = '4';
		else if (array[i][0] == '3' && !(array[i][3]))
			array[i][3] = '4';
		else if (array[i][5] == '3' && !(array[1][2]))
			array[i][2] = '4';
		else
		{
			if (i == 3)
				return (0);
			i ++;
		}
		return (1);
	}
	return (0);
}

void	ft_place_2_of_4(char array[6][6])
{
	if (ft_missing2_4(array) != 0)
		ft_place_last4(array);
}

void	ft_place_last4(char array[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (ft_cnt_nb(array, '4') == 4)
		j = 5;
	else if (ft_cnt_nb(array, '4') == 3)
	{
		while (j < 5)
		{
			if (i == 5)
			{
				j ++;
				i = 1;
			}
			if (ft_place_free(array, '4', i, j) == 1)
				break ;
			i ++;
		}
		array[j][i] = '4';
	}
	else if (ft_cnt_nb(array, '4') == 2)
		ft_place_2_of_4(array);
}
