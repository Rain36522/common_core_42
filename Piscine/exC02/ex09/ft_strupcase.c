/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:35:01 by pudry             #+#    #+#             */
/*   Updated: 2023/06/10 12:04:31 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* Cette fonction returne 1 si la chaine est faite uniquement de lettres 
 * minuscules.*/
char	*ft_strcapitalise(char *str)
{
	int		iasc_char;
	char	*cptrvalue;

	cptrvalue = str;
	iasc_char = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			write(1, "ok2", 3);
			str ++;
			iasc_char = *str;
			if (*str != '\0' && iasc_char  <= 112 && iasc_char >= 97)
			{		
				write(1, "ok", 2);
				iasc_char -= 32;
				*str = iasc_char;
			}
		}
		else
			str ++;
	}
	return (cptrvalue);
}

int main(void)
{
	char	str[15] = "sa va bi En";
	char	*ptr;
	char	c;

	ptr = str;
	ft_strcapitalise(ptr);
	while (*ptr != '\0')
	{
		c = *ptr;
		write(1, &c, 1);
		ptr ++;
	}
}

