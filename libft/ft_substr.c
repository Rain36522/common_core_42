/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:55:21 by pudry             #+#    #+#             */
/*   Updated: 2023/10/12 11:06:06 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	else if (ft_strlen(s) < len)
		len = ft_strlen(s) + 1;
	else
		len += 1;
	str = (char *) malloc(len);
	if (! str)
		return (NULL);
	else if (len == 0 || start > ft_strlen(s))
		return (str);
	len --;
	str[len] = '\0';
	while (i < start)
		i ++;
	s += i;
	ft_strlcpy(str, s, len + 1);
	return (str);
}
