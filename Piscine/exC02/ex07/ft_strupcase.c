/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:35:01 by pudry             #+#    #+#             */
/*   Updated: 2023/06/11 16:20:41 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* Cette fonction returne 1 si la chaine est faite uniquement de lettres 
 * minuscules.*/
char	*ft_strupcase(char *str)
{
	int		iasc_char;
	char	*cptrvalue;

	cptrvalue = str;
	iasc_char = 0;
	while (*str != '\0')
	{
		iasc_char = *str;
		if (iasc_char >= 97 && iasc_char <= 122)
		{
			iasc_char -= 32;
			*str = iasc_char;
		}
		str ++;
	}
	return (cptrvalue);
}
/*
int main(void)
{
	char	str[10] = "Salut";
	char	*ptr;

	ptr = str;
	ft_strupcase(str);
}
*/
