/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:50:51 by pudry             #+#    #+#             */
/*   Updated: 2023/10/12 11:14:59 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_int_to_str(char *str, long n)
{
	if (n < 9)
		*str = n + '0';
	else
	{
		*str = n % 10 + '0';
		str --;
		ft_int_to_str(str, n / 10);
	}
}

char	*ft_itoa(int n)
{
	int		isize;
	char	*str;
	long	i;
	long	j;

	isize = 1;
	i = n;
	if (i < 0)
		i *= -1;
	j = i;
	while (i > 9)
	{
		i = i / 10;
		isize ++;
	}
	if (n < 0)
		isize ++;
	str = (char *) malloc(isize + 1);
	if (!str)
		return (NULL);
	str[isize --] = '\0';
	if (n < 0)
		*str = '-';
	ft_int_to_str(str + isize, j);
	return (str);
}
