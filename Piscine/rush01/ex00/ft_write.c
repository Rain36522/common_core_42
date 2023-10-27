/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroman-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:50:36 by aroman-h          #+#    #+#             */
/*   Updated: 2023/06/18 23:05:22 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(char array[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < 5)
	{
		if (i == 5)
		{
			write(1, "\n", 1);
			j ++;
			i = 1;
		}
		else if (j < 5)
		{
			write(1, &array[i][j], 1);
			i ++;
		}
		if (i > 1)
			write(1, " ", 1);
	}
}
