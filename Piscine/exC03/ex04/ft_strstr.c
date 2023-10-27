/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:53:06 by pudry             #+#    #+#             */
/*   Updated: 2023/06/12 18:25:59 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/* This function search if in str we have the same valueassigned to to_find
 * if it the case, it return the pointer at the position who start
 * the value in str that s equal to to_find.
 * if there s no corresponding string, that s return \0*/
char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (*to_find != '\0' && *to_find == *str)
			{
				++ str;
				++ to_find;
				++ i;
			}
			if (*to_find == '\0')
			{
				return (str -= i);
			}
			str -= i -1;
			to_find -= i;
		}
		++ str;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	string[100] = "fiwdqre4839-0ew[g-fp'42eikjdnrljdkgrfrfjrek;f;erk";
	char	find[100] = "0ew";
	char	w;
	char	*str;
	char	*to_find;

	str = string;
	to_find = find;
	str = ft_strstr(str, to_find);

	while (*str != '\0')
	{
		w = *str;
		write(1, &w, 1);
		++ str;
	}
	if (*str == '\0')
		write(1, "A", 1);
}
*/
