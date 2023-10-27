/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:05:04 by pudry             #+#    #+#             */
/*   Updated: 2023/06/15 08:35:05 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	while (i < (nb) / 2)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}
/*
int main(void)
{
	printf("Prime ? %d \n", ft_is_prime(4));
	return (0);
}
*/
