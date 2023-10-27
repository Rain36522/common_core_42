/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:20:42 by pudry             #+#    #+#             */
/*   Updated: 2023/06/12 18:24:16 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++ i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && nb > i)
		++ i;
	while (*src != '\0' && nb > i)
	{
		dest[i] = src[j];
		++ i;
		++ j;
	}
	dest[i] = '\0';
	i = ft_strlen(dest) + ft_strlen(src);
	return (i);
}
/*
int    main(void)
{
    char dest[20] = "";
    char src[20] = "Roi";
    unsigned int size = 0;

    printf ("F ->%u", ft_strlcat(dest, src, size));
    printf ("V ->%lu\n", strlcat(dest, src, size));
    return (0);
}
*/
