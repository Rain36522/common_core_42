/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:43:13 by pudry             #+#    #+#             */
/*   Updated: 2023/06/08 17:43:20 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	inumber;

	inumber = 0;
	while (*str != '\0')
	{
		++ inumber;
		++ str;
	}
	return (inumber);
}
/*
int main(void)
{
	int i;
	char ci;
	char *ptr = "salutBG";

	i = ft_strlen(ptr);
	
	ci = i + '0';
	write(1,&ci, 1);
}
*/
