/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:43:07 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/10 12:45:38 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char c);
char	ft_position_char(int isize_l, int isize_c, int ipos_l, int ipos_c);
void	ft_update_loop(int *ipos_l, int *ipos_c, int isize_c)
{
	if (*ipos_c == isize_c - 1)
	{
		*ipos_l +=1;
		*ipos_c = 0;
	}	
	else 
	{
		*ipos_c += 1;
	}
}

void rush(int isize_l, int isize_c)
{
	int ipos_l;
	int ipos_c;
	char ctoPrint;

	if (isize_l && isize_c)
	{
		ipos_l = 0;
		ipos_c = 0;
		while (!( ipos_l == isize_l-1 && ipos_c == isize_c-1) )
		{	
			ctoPrint = ft_position_char(isize_l, isize_c, ipos_l, ipos_c);
			ft_putchar(ctoPrint);
			if(ipos_c == isize_c -1)
			{
				ft_putchar('\n');
			}
			ft_update_loop(&ipos_l, &ipos_c,isize_c);
		}	
			ctoPrint = ft_position_char(isize_l, isize_c, ipos_l, ipos_c);
			ft_putchar(ctoPrint);
	}
	ft_putchar('\n');
}
