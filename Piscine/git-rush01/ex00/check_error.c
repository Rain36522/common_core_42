/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroman-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:34:38 by aroman-h          #+#    #+#             */
/*   Updated: 2023/06/18 13:42:39 by aroman-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_return_error(void)
{
	write(1, "Error\n", 6);
}

/* This function will check if we have the value 1 in one angle,
 * In the other case for this agle, we have the same value*/
int	ft_check_array_header_angl(char array[6][6])
{
	if (array[0][1] == '1' && array[1][0] != '1')
		return (0);
	else if (array[1][0] == '1' && array[0][1] != '1')
		return (0);
	else if (array[1][5] == '1' && array[0][4] != '1')
		return (0);
	else if (array[1][5] == '1' && array[0][4] != '1')
		return (0);
	else if (array[5][1] == '1' && array[4][0] != '1')
		return (0);
	else if (array[5][1] == '1' && array[4][0] != '1')
		return (0);
	else if (array[5][4] == '1' && array[4][5] != '1')
		return (0);
	else if (array[4][5] == '1' && array[5][4] != '1')
		return (0);
	return (1);
}

int	ft_check_array_header_side(char array[6][6])
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (array[0][i] + array[5][i] - (2 * 48) > 5)
			return (0);
		else if (array[i][0] + array[i][5] - (2 * 48) > 5)
			return (0);
		i ++;
	}
	while (i < 5)
	{
		if (array[0][i] + array[5][i] - (2 * 48) <= 2)
			return (0);
		else if (array[i][0] + array[i][5] - (2 * 48) <= 2)
			return (0);
		i ++;
	}
	return (1);
}
