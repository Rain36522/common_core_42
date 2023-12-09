/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:11:43 by pudry             #+#    #+#             */
/*   Updated: 2023/12/08 19:12:07 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static t_philo	*ft_treat_input(char **argv)
{
	int		i;
	t_philo	*philos;

	i = 1;
	while (argv[i] && ft_check_unsigned_int(argv[i]))
		i ++
	if (i != 6)
		return (NULL);
	i = 0;
	philos = NULL;
	
}


int	main(int argc, char **argv)
{
	if (argc != 6)
		return (NULL);
	ft_treat_input(argv);
	return (0);
}