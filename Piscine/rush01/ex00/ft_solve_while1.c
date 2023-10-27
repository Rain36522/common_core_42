/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_while1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:34:51 by pudry             #+#    #+#             */
/*   Updated: 2023/06/18 23:08:36 by aroman-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cnt_void_case(char array[6][6], int line, int colone);
int	ft_cnt_nb(char array[6][6], char nb);
int	ft_place_free(char array[6][6], char nb, int pos_c, int pos_l);
int	ft_found_one_possibility_line(char array[6][6]);

int	ft_found_one_possibility_line(char array[6][6])
{
	int	i;
	int	j;
	int	number;
	int	void_case;

	i = 0;
	j = 0;
	number = 0;
	while (++ i < 5 && number == 0)
	{
		if (ft_cnt_void_case(array, i, 0) == 1)
		{
			while (++ j < 5)
			{
				if (array[i][j])
					number += array[i][j] - 48;
				else
					void_case = j;
			}
			array[i][void_case] = (10 - number) + '0';
			return (1);
		}
	}
	return (0);
}

int	ft_found_one_possibility_row(char array[6][6])
{
	int	i;
	int	j;
	int	number;
	int	void_case;

	i = 0;
	j = 0;
	number = 0;
	while (++ i < 5 && number == 0)
	{
		if (ft_cnt_void_case(array, 0, i) == 1)
		{
			while (++ j < 5)
			{
				if (array[j][i])
					number += array[j][i] - 48;
				else
					void_case = j;
			}
			array[void_case][i] = (10 - number) + '0';
			return (1);
		}
	}
	return (0);
}

int	ft_place_last_number_in_line(char array[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		i += ft_found_one_possibility_line(array);
		i += ft_found_one_possibility_row(array);
		j ++;
	}
	return (i);
}

int	ft_place_last_number(char array[6][6], char nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (ft_cnt_nb(array, nb) == 4)
		return (0);
	else if (ft_cnt_nb(array, nb) == 3)
	{
		while (j < 5)
		{
			if (i == 5)
			{
				j ++;
				i = 1;
			}
			if (ft_place_free(array, nb, i, j) == 1)
				break ;
			i ++;
		}
		array[j][i] = nb;
		return (1);
	}
	return (0);
}

int	ft_check_last_number(char array[6][6])
{
	int	i;

	i = 0;
	i += ft_place_last_number(array, '1');
	i += ft_place_last_number(array, '2');
	i += ft_place_last_number(array, '3');
	i += ft_place_last_number(array, '4');
	return (i);
}
