/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:20:42 by pudry             #+#    #+#             */
/*   Updated: 2023/06/12 08:04:03 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*mem_dest;

	mem_dest = dest;
	while (*dest != '\0')
		++ dest;
	while (*src != '\0')
	{
		*dest = *src;
		++ src;
		++ dest;
	}
	*dest = *src;
	return (mem_dest);
}
