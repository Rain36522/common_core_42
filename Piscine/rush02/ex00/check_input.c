/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:10:01 by pudry             #+#    #+#             */
/*   Updated: 2023/06/25 23:01:14 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function make a verification of the user input and if there is an 
 * error, they return error.*/
int	ft_check_input_nbr(char *cnbr)
{
	if (!(*cnbr))
		return (0);
	while (*cnbr >= 48 && *cnbr <= 57 && *cnbr)
		cnbr ++;
	if (*cnbr)
		return (0);
	return (1);
}

int	ft_check_input_zero(char *str)
{
	while (*str == '0')
		str ++;
	if (!(*str))
		return (1);
	return (0);
}
