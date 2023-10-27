/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:25:26 by pudry             #+#    #+#             */
/*   Updated: 2023/06/11 19:06:25 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction a pour but de copier la chaine de caractere *src dans 
 * la chaine *dest La deuxieme boucle complete la chaine dest par des NULL
 * si src est plus petit que n */
char	*ft_strncpy(char *dest, char*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++ i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++ i;
	}
	return (dest);
}
