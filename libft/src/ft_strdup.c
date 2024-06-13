/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_multiple.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:25:19 by pudry             #+#    #+#             */
/*   Updated: 2024/06/13 17:25:19 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		isize;
	int		i;
	char	*dup;

	isize = ft_strlen(str);
	dup = (char *) malloc(isize + 1);
	if (! dup)
		return (NULL);
	dup[isize --] = '\0';
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i ++;
	}
	return (dup);
}
