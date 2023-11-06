/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:33:00 by pudry             #+#    #+#             */
/*   Updated: 2023/11/06 15:41:55 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minitalk.h"

char	*ft_char_to_bin(unsigned int chr, char *c)
{
	int	idiv;
	int	i;

	idiv = 2;
	i = 0;
	while (i < 8)
	{
		c[i] = (chr / idiv) % 2;
		i ++;
		idiv *= 2;	
	}
	return (c);
}