/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:36:58 by pudry             #+#    #+#             */
/*   Updated: 2023/10/17 17:00:35 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include  <stdio.h>

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	int		isize;
	char	*s;
	va_list	va_lst;

	s = (char *)str;
	i = ft_cntarg(s);
	isize = 0;
	va_start(va_lst, str);
	j = ft_putstrprct(s);
	s += j;
	isize += j;
	while (*s)
	{
		isize += ft_put_var(va_lst, s);
		s += 2;
		j = ft_putstrprct(s);
		isize += j;
			s += j;
	}
	return (isize);
}
/*
int	main(void)
{
	int		i;
	int		j;

	i = ft_printf("p : %p\n", "");
	j = printf("p : %p\n", "");
	printf("my : %i, original %i\n", i, j );
	return (0);
}
*/