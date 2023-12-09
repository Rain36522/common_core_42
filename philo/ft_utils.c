/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:16:16 by pudry             #+#    #+#             */
/*   Updated: 2023/12/08 19:19:04 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i ++;
	return (s1 - s2)
}

unsigned int	ft_check_unsignint(char *str)
{
	if (!*str || *str < '0' || )
		return (0);
	else if (ft_strcmp(str, "4294967295") < 0)
		return (0);
}

unsigned int	char_to_unsigned(char *str)
{

}