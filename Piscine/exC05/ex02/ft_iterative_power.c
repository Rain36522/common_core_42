/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:37:58 by pudry             #+#    #+#             */
/*   Updated: 2023/06/15 08:36:42 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	iresult;

	iresult = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power -- > 1)
		iresult *= nb;
	return (iresult);
}
/*
int	main (void)
{
	printf("%d", ft_iterative_power(2, 5));
	return (0);
}
*/
