/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:04:27 by pudry             #+#    #+#             */
/*   Updated: 2023/06/08 15:24:49 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//fonction inversant le contenu des deux parametres.

void	ft_swap(int *a, int *b)
{
	int	ia;
	int	ib;

	ia = *a;
	ib = *b;
	*a = ib;
	*b = ia;
}
/*
int main(void)
{
	int 	testa;
	int		testb;
	int*	a;
	int*	b;
	char	ca;
	char	cb;

	testa = 3;
	testb = 4;

	a = &testa;
	b = &testb;
	
	ft_swap(a, b);
	
	ca = testa + '0';
	cb = testb +'0';

	write(1, &ca, 1);
	write(1, &cb, 1);

	return 0;
}
*/
