/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:20:42 by pudry             #+#    #+#             */
/*   Updated: 2023/06/12 08:05:58 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*mem_dest;

	mem_dest = dest;
	while (*dest != '\0')
		++ dest;
	while (*src != '\0' && nb != 0)
	{
		*dest = *src;
		++ src;
		++ dest;
		-- nb;
	}
	*dest = '\0';
	return (mem_dest);
}
