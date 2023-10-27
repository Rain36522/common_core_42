/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:28:46 by pudry             #+#    #+#             */
/*   Updated: 2023/06/26 15:04:17 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

/*This function generate a new string for adding a zero at the old string*/
char	*ft_add_o_str(char *str)
{
	int		isize;
	char	*new_str;

	isize = ft_strlen(str) + 2;
	new_str = malloc(sizeof(char) * isize);
	new_str[-- isize] = '\0';
	new_str[-- isize] = '0';
	while (-- isize >= 0)
		new_str[isize] = str[isize];
	free(str);
	return (new_str);
}

/*This function generate a string with the number 1 inside*/
char	*ft_generate_ctype(void)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * 2);
	ptr[1] = '\0';
	ptr[0] = '1';
	return (ptr);
}

char	*ft_restart_ctype(char *str)
{
	free(str);
	return (ft_generate_ctype());
}

char	*ft_add_twoo_str(char *str)
{
	str = ft_add_o_str(str);
	str = ft_add_o_str(str);
	return (str);
}

char	*ft_add_treeo_str(char *str)
{
	str = ft_add_o_str(str);
	str = ft_add_o_str(str);
	str = ft_add_o_str(str);
	return (str);
}
