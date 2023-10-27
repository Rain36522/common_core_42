/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fc_DefineChar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:09:43 by pudry             #+#    #+#             */
/*   Updated: 2023/06/10 10:41:08 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction retourne un charactere selon la position donnee.
// Elle recois la taille du tableau et la position du character.
// Afin de retourner le charactere adequat.
// Particularites :
// Emploie du '\\' afin que l on puisse retourner le char \.
// l emploi du \ dans une condition afin de la separer en 2 lignes

char	ft_position_char(int isize_l, int isize_c, int ipos_l, int ipos_c)
{
	if (ipos_l == 1 && ipos_c == 1 || ipos_l == isize_l && ipos_c == isize_c)
	{
		return ('/');
	}
	else if (ipos_l == isize_l && ipos_c == 1 || \
	ipos_c == isize_c && ipos_l == 1)
	{
		return ('\\');
	}
	else if (ipos_l == 1 || ipos_c == 1 || \
	ipos_l == isize_l || ipos_c == isize_c)
	{
		return ('*');
	}
	else
	{
		return (' ');
	}
}
