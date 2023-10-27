/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 08:49:06 by pudry             #+#    #+#             */
/*   Updated: 2023/06/23 09:16:02 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i ++;
	printf("Comp\n");
	if (!(s2[i]))
		return (0);
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!(*to_find))
		return (str);
	while (*str)
	{
		if (*str == *to_find)
			if (ft_cmp(str, to_find) == 0)
				return (str);
		str ++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str[] = "Salut comment ca va?";
	char	to_find[] = "com";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("Str : %s\n", result);
}*/
