/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:58:44 by pudry             #+#    #+#             */
/*   Updated: 2023/06/28 19:07:08 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int	ft_strlen(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\n' && array[i] != '\0')
		i ++;
	return (i);
}

int	ft_strlen_end(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
		i ++;
	return (i);
}

int	ft_arraylen(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i ++;
	return (i);
}

int	ft_check_obstacl(struct map array)
{
	int	i;
	int	j;

	j = 0;
	while (array.a[j])
	{
		i = 0;
		while (array.a[j][i] && array.a[j][i] != '\n'
			&& array.a[j][i] == array.o)
			i ++;
		if (array.a[j][i] && array.a[j][i] != '\n')
			return (0);
		j ++;
	}
	return (1);
}
