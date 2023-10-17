/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 07:24:48 by paul              #+#    #+#             */
/*   Updated: 2023/10/17 08:04:30 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

char	*ft_join(int nStr, ...)
{
	va_list	va_lst;
	int		i;
	char	*ptr;
	char	*word;

	i = 0;
	va_start(va_lst, nStr);
	if (nStr > 0)
	{
		word = va_arg(va_lst, char *);
		ptr = ft_strdup(word);
		i ++;
	}
	while (i < nStr)
	{
		word = va_arg(va_lst, char *);
		ptr = ft_strjoin(ptr, word);
		i ++;
	}
	va_end(va_lst);
	return (ptr);
}

int	main(void)
{
	char	str1[] = "Salut ";
	char	str2[] = "Salut ";
	char	str3[] = "Salut ";
	char	str4[] = "Salut\n";
	printf("%s", ft_join(4, str1, str2, str3, str4));
	

	return (0);
}