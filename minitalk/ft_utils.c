/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:04:59 by pudry             #+#    #+#             */
/*   Updated: 2023/11/06 17:19:42 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/ft_minitalk.h"
#include <stdlib.h>

char	*ft_bin_to_str(unsigned char c)
{
	char	*s;
	int		i;
	int		j;

	j = (int)c;
	s = (char *) malloc(sizeof(char) * 9);
	if (!s)
		return (NULL);
	s[8] = '\0';
	i = 0;
	printf("c : ");
	while (i < 8)
	{
		s[i] = j % 2;
		printf ("%i", j % 2);
		j /= 2;
		i ++;
	}
	printf("\ns : %s\n", s);
	return (s);
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

int ft_bin_to_int(char *s)
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
	return (j);
}

int main(void)
{
	int 	i;
	char	*s;

	s = ft_bin_to_str('c');
	printf("char : %s\n", s);
	i = ft_bin_to_int(s);
	printf("char : %i", i);
	return (0);
}
