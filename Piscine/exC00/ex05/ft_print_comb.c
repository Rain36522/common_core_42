/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:51:58 by pudry             #+#    #+#             */
/*   Updated: 2023/06/08 19:21:21 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	conv_write(int ia, int ib, int ic)
{
	char	ca;
	char	cb;
	char	cc;

	ca = ia + '0';
	cb = ib + '0';
	cc = ic + '0';
	write(1, &ca, 1);
	write(1, &cb, 1);
	write(1, &cc, 1);
	write(1, &",", 1);
	write(1, &" ", 1);
}

void	ft_print_comb(void)
{
	int		ia;
	int		ib;
	int		ic;

	ia = 0;
	ib = 1;
	ic = 1;
	while (ia < 7)
	{
		++ic;
		if (ib == 8)
		{
			++ia;
			ib = ia + 1;
			ic = ib + 1;
		}
		if (ic == 9 && ia < 7)
		{
			ic = ++ib + 1;
		}
		conv_write(ia, ib, ic);
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
