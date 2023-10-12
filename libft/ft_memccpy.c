/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:25:16 by paul              #+#    #+#             */
/*   Updated: 2023/10/03 17:39:41 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		n --;
		*(unsigned char *)dest = *(unsigned char *)src;
		dest ++;
		if (*(unsigned char *)dest == (unsigned char) c)
			return (dest);
		src ++;
	}
	return (0);
}
