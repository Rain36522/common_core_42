/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:23:09 by pudry             #+#    #+#             */
/*   Updated: 2023/06/07 18:04:04 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Cette fonction imprime l alphabet de a a z en minuscule
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		++c;
	}
}
