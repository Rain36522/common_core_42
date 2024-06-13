/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:03:05 by paul              #+#    #+#             */
/*   Updated: 2024/05/27 15:42:02 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i])
		i ++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int	main(int arg_c, char **arg_v)
{
	int	iresult;
	
	if (arg_c == 4)
	{
		iresult = ft_strncmp(arg_v[1], arg_v[2], atoi(arg_v[3]));
		printf("%i\n", iresult);
	}
	return (0);
}
*/