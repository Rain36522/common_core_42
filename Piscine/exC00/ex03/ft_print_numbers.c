/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:08:18 by pudry             #+#    #+#             */
/*   Updated: 2023/06/07 21:24:42 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//cette fonction ecrit les chiffres du plus petit au plus grand
void	ft_print_numbers(void)
{
	int		i;
	char	number;

	i = 0;
	while (i <= 9)
	{
		number = i + '0';
		write(1, &number, 1);
		++i;
	}
}
