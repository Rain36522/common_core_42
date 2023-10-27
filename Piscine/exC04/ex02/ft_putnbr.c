/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:22:18 by pudry             #+#    #+#             */
/*   Updated: 2023/06/21 08:25:32 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	conv;

	conv = nb + 48;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
		write (1, &conv, 1);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*int    main(void)
{
    int nb = 123456789;

    ft_putnbr(nb);
    write (1, "\n", 1);
    return (0);
}*/
