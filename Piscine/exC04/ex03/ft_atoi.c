/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:38:51 by pudry             #+#    #+#             */
/*   Updated: 2023/06/21 08:25:43 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	char_to_int(char *str)
{
	int	ivalue;

	ivalue = 0;
	while (*str >= 48 && *str <= 57)
	{
		ivalue = ivalue * 10 + (*str - 48);
		++ str;
	}
	return (ivalue);
}
/*This function return a number with  the sign + or -.
 * They took the information by the pointer given.
 * After that the charact are convert to an int value
 * and returned.*/

int	ft_atoi(char *str)
{
	int		iminus;
	int		ivalue;

	ivalue = 0;
	iminus = 0;
	if (!(*str))
		return (0);
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str ++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			++ iminus;
		++ str;
	}
	if (*str >= 48 && *str <= 57)
		ivalue = char_to_int(str);
	if (iminus % 2 != 0)
		ivalue *= -1;
	return (ivalue);
}
/*
int main(void)
{
	char *ptr = "";

	printf("%d \n", ft_atoi(ptr));
	return (0);
}
*/
