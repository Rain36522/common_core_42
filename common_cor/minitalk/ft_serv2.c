/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_serv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:23:48 by pudry             #+#    #+#             */
/*   Updated: 2023/11/09 10:49:42 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/minitalk.h"

char	*ft_add_str(char *str, char c)
{
	int		isize;
	char	*ptr;
	int		i;

	if (str)
		isize = ft_strlen(str);
	else
		isize = 0;
	ptr = (char *) malloc(sizeof(char) * (2 + isize));
	if (!ptr)
		return (NULL);
	ptr[isize + 1] = '\0';
	i = 0;
	while (i < isize)
	{
		ptr[i] = str[i];
		i ++;
	}
	ptr[isize] = c;
	if (str)
		free(str);
	return (ptr);
}
