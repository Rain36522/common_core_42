/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:14:14 by pudry             #+#    #+#             */
/*   Updated: 2023/06/15 08:35:50 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	iminus;

	i = 0;
	iminus = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= iminus;
		iminus += 2;
		i ++;
	}
	if (nb == 0)
		return (i);
	else
		return (0);
}
/*
int main(void)
{
	int i = 10000;
	printf("carre de %d = %d\n", i, ft_sqrt(i));
	return (0);
}
*/
