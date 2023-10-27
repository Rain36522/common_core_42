/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:36:06 by pudry             #+#    #+#             */
/*   Updated: 2023/06/09 15:02:47 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Cette fonction returne 1 si la chaine est faite uniquement de chiffres */
int	ft_str_is_numeric(char *str)
{
	int	ireturned_value;
	int	iasc_char;

	iasc_char = 0;
	ireturned_value = 1;
	while (*str != '\0')
	{
		iasc_char = *str;
		if (iasc_char < 48 || iasc_char > 57)
			ireturned_value = 0;
	str ++;
	}
	return (ireturned_value);
}
/*
int main(void)
{
	char	*str = "etfgv";
	int 	i_value;
	char	c_value;

	i_value = ft_str_is_numeric(str);
	c_value = i_value + '0';
	write(1, &c_value, 1);
}
*/
