/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specific_4_3_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroman-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:20:22 by aroman-h          #+#    #+#             */
/*   Updated: 2023/06/18 22:00:39 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_specific_433_left(char array[6][6], int line)
{
	if (array[line][1] == '4' && array[line][2] == '3'\
			&& array[line][5] == '3' && !(array[line][3]))
	{
		array[line][3] = '1';
		array[line][4] = '2';
	}
	if (array[line][1] == '3' && array[line][2] == '4'\
			&& array[line][5] == '3' && !(array[line][3]))
	{
		array[line][3] = '2';
		array[line][4] = '1';
	}
	if (array[line][1] == '3' && array[line][2] == '4'\
			&& array[line][5] == '2' && !(array[line][3]))
	{
		array[line][3] = '1';
		array[line][4] = '2';
	}
	else
		return (0);
	return (1);
}

int	ft_specific_433_right(char array[6][6], int line)
{
	if (array[line][4] == '4' && array[line][3] == '3'\
			&& array[line][0] == '3' && !(array[line][2]))
	{
		array[line][2] = '1';
		array[line][1] = '2';
	}
	if (array[line][4] == '3' && array[line][3] == '4'\
			&& array[line][0] == '3' && !(array[line][2]))
	{
		array[line][2] = '2';
		array[line][1] = '1';
	}
	if (array[line][4] == '3' && array[line][3] == '4'\
			&& array[line][0] == '2' && !(array[line][2]))
	{
		array[line][2] = '1';
		array[line][1] = '2';
	}
	else
		return (0);
	return (1);
}

int	ft_specific_433_up(char array[6][6], int row)
{
	if (array[1][row] == '4' && array[2][row] == '3'\
			&& array[5][row] == '3' && !(array[3][row]))
	{
		array[3][row] = '1';
		array[4][row] = '2';
	}
	else if (array[1][row] == '3' && array[2][row] == '4'\
			&& array[5][row] == '3' && !(array[3][row]))
	{
		array[3][row] = '2';
		array[4][row] = '1';
	}
	else if (array[1][row] == '3' && array[2][row] == '4'\
			&& array[5][row] == '2' && !(array[3][row]))
	{
		array[3][row] = '1';
		array[4][row] = '2';
	}
	else
		return (0);
	return (1);
}

int	ft_specific_433_down(char array[6][6], int row)
{
	if (array[4][row] == '4' && array[3][row] == '3'\
			&& array[0][row] == '3' && !(array[2][row]))
	{
		array[2][row] = '1';
		array[1][row] = '2';
	}
	else if (array[4][row] == '3' && array[3][row] == '4'\
			&& array[0][row] == '3' && !(array[2][row]))
	{
		array[2][row] = '2';
		array[1][row] = '1';
	}
	else if (array[4][row] == '3' && array[3][row] == '4'\
			&& array[0][row] == '2' && !(array[2][row]))
	{
		array[2][row] = '1';
		array[1][row] = '2';
	}
	else
		return (0);
	return (1);
}

int	ft_specific(char array[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < 5 && i == 0)
	{
		i += ft_specific_433_left(array, j);
		i += ft_specific_433_right(array, j);
		i += ft_specific_433_up(array, j);
		i += ft_specific_433_down(array, j);
		j ++;
	}
	return (i);
}
