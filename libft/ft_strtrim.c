/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:17:06 by pudry             #+#    #+#             */
/*   Updated: 2023/10/12 11:05:51 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0)
		i ++;
	while (ft_strchr(set, s1[j]) != 0)
		j --;
	if (!*s1 || j <= 0)
		return (ft_calloc(1, sizeof(char)));
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
