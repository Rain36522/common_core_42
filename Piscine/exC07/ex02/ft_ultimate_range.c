/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:48:20 by pudry             #+#    #+#             */
/*   Updated: 2023/06/22 08:53:12 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	ivalue;

	i = 0;
	ivalue = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
		*range = (int *) malloc((max - min) * sizeof(int));
	if (!(*range))
		return (-1);
	while (min < max)
		(*range)[i ++] = min ++;
	return (ivalue);
}
/*
int main(void)
{
	int	i;
	int	base;
	int	*ptr1 = &base;
	int	**ptr2 = &ptr1;
	ft_ultimate_range(ptr2, 3, 6);
	i = 4;
	while (i != '\0')
	{
		printf("%d\n", ptr1[i]);
		i --;
	}	
	return (0);
}
*/
