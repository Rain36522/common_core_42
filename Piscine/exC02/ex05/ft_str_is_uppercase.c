/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:35:01 by pudry             #+#    #+#             */
/*   Updated: 2023/06/09 15:08:17 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* Cette fonction returne 1 si la chaine est faite uniquement de lettres 
 * minuscules.*/
int	ft_str_is_uppercase(char *str)
{
	int	ireturned_value;
	int	iasc_char;

	iasc_char = 0;
	ireturned_value = 1;
	while (*str != '\0')
	{
		iasc_char = *str;
		if (iasc_char < 65 || iasc_char > 97)
			ireturned_value = 0;
	str ++;
	}
	return (ireturned_value);
}
/*
int main(void)
{
	char	*str = "";
	int 	i_value;
	char	c_value;

	i_value = ft_str_is_alpha(str);
	c_value = i_value + '0';
	write(1, &c_value, 1);
}
*/
