/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:31:44 by pudry             #+#    #+#             */
/*   Updated: 2023/06/18 23:12:18 by aroman-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction va compter combien de fois un meme nombre est present dans
 * le tableau.*/
int	ft_cnt_nb(char array[6][6], char nb)
{
	int	i;
	int	j;
	int	nb_quantity;

	i = 1;
	j = 1;
	nb_quantity = 0;
	while (j < 5)
	{
		if (i == 5)
		{	
			j ++;
			i = 1;
		}
		if (nb == array[j][i] && j < 5)
		{
			nb_quantity ++;
		}
		i ++;
	}
	return (nb_quantity);
}
/* Cette fonction va regarder si le nombre est deja present dans la meme
 * ligne ou la meme colonne.*/

int	ft_place_free(char array[6][6], char nb, int pos_c, int pos_l)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (array[pos_l][i] == nb)
			return (0);
		else if (array[i][pos_c] == nb)
			return (0);
		i ++;
	}
	return (1);
}
/*cette fonction compte le nombre de case vide dans une ligne ou
 * colonne. (0 pour le parametre ne voulant pas etre compte*/

int	ft_cnt_void_case(char array[6][6], int line, int colone)
{
	int	i;
	int	icount;

	i = 1;
	icount = 0;
	if (line != 0)
	{
		while (i < 5)
		{
			if (!(array[line][i]))
				icount ++;
			i ++;
		}
	}
	else
	{
		while (i < 5)
		{
			if (!(array[i][colone]))
				icount ++;
			i ++;
		}
	}
	return (icount);
}
