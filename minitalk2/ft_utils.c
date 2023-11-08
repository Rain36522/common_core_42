/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:19:29 by pudry             #+#    #+#             */
/*   Updated: 2023/11/06 21:24:15 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/minitalk.h"

char	*ft_char_to_bin(unsigned int chr, char *c)
{
	int	idiv;
	int	i;

	idiv = 1;
	i = 7;
	printf("bin2 : %u : ", chr);
	while (i >= 0)
	{
		c[i] = ((chr / idiv) % 2) + '0';
		printf("%i", (chr / idiv) % 2);
		i --;
		idiv *= 2;	
	}
	printf("\n");
	return (c);
}

static  int ft_power(int ipuisance)
{
	int i;

	i = 2;
	if (ipuisance == 0)
		return (1);
	while (ipuisance > 0)
	{
		i *= 2;
		ipuisance --;
	}
	return (i);
}

char ft_bin_to_int(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i])
		i ++;
	if (i != 8)
		return (0);
	j = 0;
	while (i > 0)
	{
		i --;
		if (s[i] == '1')
			j += ft_power(i - 1);
	}
	return ((unsigned char)j);
}
