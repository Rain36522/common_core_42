/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroman-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:07:17 by aroman-h          #+#    #+#             */
/*   Updated: 2023/06/18 17:50:23 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_input(char *ptr)
{
	int	i;
	int	nvalue;
	int	spacevalue;

	i = 0;
	nvalue = 0;
	spacevalue = 0;
	while (ptr[i])
	{
		if (ptr[i] == ' ' && ptr[i - 1] >= '1' && ptr[i - 1] <= '4')
			spacevalue++;
		else if (ptr[i] >= '1' && ptr[i] <= '4')
			nvalue++;
		i++;
	}
	return (nvalue == 16 && spacevalue == 15 && i == 31);
}
