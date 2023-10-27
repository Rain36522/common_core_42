/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:48:20 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 08:52:53 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*iarray;
	int	i;

	if (min >= max)
		return (0);
	i = min - 1;
	iarray = (int *) malloc((max - min + 1) * sizeof(int));
	while (++ i < max)
		iarray[i - min] = i;
	return (iarray);
}
/*
int main(void)
{
	int	*i;
	
	i = ft_range(3 ,6);
	printf("%d\n", *i);
	while (*i != '\0')
	{
		printf("%d\n", *i);
		i ++;
	}	
	return (0);
}
*/
