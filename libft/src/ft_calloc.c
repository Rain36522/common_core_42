/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:58:45 by pudry             #+#    #+#             */
/*   Updated: 2024/05/27 13:11:33 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(count * size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < count * size)
		str[i ++] = 0;
	return (str);
}
