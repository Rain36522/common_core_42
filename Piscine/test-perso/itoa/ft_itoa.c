/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:36:02 by pudry             #+#    #+#             */
/*   Updated: 2023/06/25 22:14:32 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_nbrlen(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i ++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i ++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		isize;
	char	*ptr;
	
	isize = ft_nbrlen(nb) + 1;
	ptr = malloc(sizeof(char) * isize + 1);
	ptr[isize] = '\0';
	isize --;
	if (nb < 0)
	{
		nb *= -1;
		ptr[0] = '-';
	}
	while (nb > 0)
	{
		ptr[isize] = nb % 10 + '0';
		nb = nb / 10;
		isize --;
	}
	return (ptr);
}

int main(void)
{
	char 	*ptr;

	ptr = ft_itoa(-3245);
	printf("str : %s\n", ptr);
	return (0);
}
