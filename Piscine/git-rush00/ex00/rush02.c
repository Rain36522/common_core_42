/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:43:07 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/11 14:56:10 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
char	ft_position_char(int isize_l, int isize_c, int ipos_l, int ipos_c);

/*This function define the character we need to return by the size
 * of the array
 * and the position we want to write.
 * So the function start by decting if we are in an angle.
 * If it is not the case, she check if we are at the edge 
 * by line or by line or column
 * If one of this condition is okay, it returns the right character.
 * Otherwise the function returns a space,
 * in our case it's the middle of the shape */

/* we make this function able to handle new characteres 
 * and specific pattern of other rushes */

char	ft_position_char(int isize_l, int isize_c, int ipos_l, int ipos_c)
{
	if (ipos_l == 0 && ipos_c == 0)
		return ('A');
	else if (ipos_l == isize_l - 1 && ipos_c == 0)
		return ('A');
	else if (ipos_l == 0 && ipos_c == isize_c - 1)
		return ('C');
	else if (ipos_l == isize_l - 1 && ipos_c == isize_c - 1)
		return ('C');
	else if (ipos_l == 0 || ipos_l == isize_l - 1)
		return ('B');
	else if (ipos_c == 0 || ipos_c == isize_c - 1)
		return ('B');
	else
		return (' ');
}

void	ft_update_loop(int *ipos_l, int *ipos_c, int isize_c)
{
	if (*ipos_c == isize_c - 1)
	{
		*ipos_l += 1;
		*ipos_c = 0;
	}
	else
	{
		*ipos_c += 1;
	}
}

void	rush(int isize_l, int isize_c)
{
	int		ipos_l;
	int		ipos_c;
	char	ctoprint;

	if (isize_l && isize_c)
	{
		ipos_l = 0;
		ipos_c = 0;
		while (!(ipos_l == isize_l - 1 && ipos_c == isize_c - 1))
		{
			ctoprint = ft_position_char(isize_l, isize_c, ipos_l, ipos_c);
			ft_putchar(ctoprint);
			if (ipos_c == isize_c - 1)
			{
				ft_putchar('\n');
			}
			ft_update_loop(&ipos_l, &ipos_c, isize_c);
		}	
		ctoprint = ft_position_char(isize_l, isize_c, ipos_l, ipos_c);
		ft_putchar(ctoprint);
	}
	ft_putchar('\n');
}
