/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:05:04 by pudry             #+#    #+#             */
/*   Updated: 2023/06/15 08:34:49 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2 || nb % 2 == 0)
		return (0);
	while (i < nb / 2 && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 3)
		return (2);
	while (i != 1)
		i = ft_is_prime(nb ++);
	return (nb - 1);
}
/*
int main(void)
{
	int	i = 2147483647;
	printf("%d next prime  %d \n", i, ft_find_next_prime(i));
	return (0);
}
*/
