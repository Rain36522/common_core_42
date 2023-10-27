/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fail-exa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:04:45 by pudry             #+#    #+#             */
/*   Updated: 2023/06/14 09:54:33 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	reverse_updown_case(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		else if (*str >= 97 && *str <= 122)
			*str -= 32;
		str ++;
	}
}

int main(void)
{
	char src[20] = "Salut 1Bg";
	char *str;
	str = src;

	reverse_updown_case(str);
	printf("Phrase : %s \n", src);
	return 0;
}
