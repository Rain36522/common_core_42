/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:04:27 by pudry             #+#    #+#             */
/*   Updated: 2023/06/13 17:21:12 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//fonction inversant le contenu des deux parametres.

void	ft_swap(int *a, int *b)
{
	int	ia;

	ia = *a;
	*a = *b;
	*b = ia;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*a;
	int	*b;

	i = 0;
	while (i <= size / 2)
	{
		a = &tab[i];
		b = &tab[size - i];
		ft_swap(a, b);
		printf("%d", tab[i]);
		i ++;
	}
}



int main(void)
{
	int	arra[9] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9};
	int *ptr;

	ptr = arra;
	ft_rev_int_tab(ptr, 9);

	while (*ptr != '\0')
	{

		printf("%d \n", *ptr);
		ptr ++;
	}	
	return 0;
}

