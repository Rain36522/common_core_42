/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_accessories.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroman-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:32:53 by aroman-h          #+#    #+#             */
/*   Updated: 2023/06/18 14:39:15 by aroman-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* These functions allow to fill a line if it needs to be composed of 1 2 3 4.*/

void	ft_put_1234_up(char array[6][6], int place)
{
	array[1][place] = '1';
	array[2][place] = '2';
	array[3][place] = '3';
	array[4][place] = '4';
}

void	ft_put_1234_down(char array[6][6], int place)
{
	array[4][place] = '1';
	array[3][place] = '2';
	array[2][place] = '3';
	array[1][place] = '4';
}

void	ft_put_1234_left(char array[6][6], int place)
{
	array[place][1] = '1';
	array[place][2] = '2';
	array[place][3] = '3';
	array[place][4] = '4';
}

void	ft_put_1234_right(char array[6][6], int place)
{
	array[place][4] = '1';
	array[place][3] = '2';
	array[place][2] = '3';
	array[place][1] = '4';
}
