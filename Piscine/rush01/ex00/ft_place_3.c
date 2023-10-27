/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:07:34 by pudry             #+#    #+#             */
/*   Updated: 2023/06/18 23:04:47 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_place_3_by_header_up(char array[6][6]);
int	ft_place_3_by_header_down(char array[6][6]);
int	ft_place_3_by_header_left(char array[6][6]);
int	ft_place_3_by_header_right(char array[6][6]);

/*Cette fonction s effectue pour essayer de trouver les 3 manquants.*/
int	ft_place_3_by_header(char array[6][6])
{
	int	i;

	i = 0;
	i += ft_place_3_by_header_up(array);
	i += ft_place_3_by_header_down(array);
	i += ft_place_3_by_header_left(array);
	i += ft_place_3_by_header_right(array);
	return (i);
}

/*Cette fonction regarde si on a un 4 dans un bord et un 2 enfasse dans
 * l entet.*/
void	ft_place_3_by_4(char array[6][6])
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (array[0][i] == '2' && array[4][i] == '4')
		{
			array[1][i] = '3';
		}
		if (array[5][i] == '2' && array[1][i] == '4')
		{
			array[4][i] = '3';
		}
		if (array[i][0] == '2' && array[i][4] == '4')
		{
			array[i][1] = '3';
		}
		if (array[i][5] == '2' && array[i][1] == '4')
		{
			array[i][4] = '3';
		}
		i ++;
	}
	ft_place_3_by_header(array);
}
