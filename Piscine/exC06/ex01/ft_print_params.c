/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:25:30 by pudry             #+#    #+#             */
/*   Updated: 2023/06/17 21:07:40 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		++ i;
	}
}

int	main(int arg_nb, char **arg_value)
{
	int	i;

	i = 0;
	while (++ i < arg_nb)
	{
		ft_putstr(arg_value[i]);
		write(1, "\n", 1);
	}
	return (0);
}
