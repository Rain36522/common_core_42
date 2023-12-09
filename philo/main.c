/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:53:27 by pudry             #+#    #+#             */
/*   Updated: 2023/12/09 19:54:38 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	t_philo	*philo;

	if (argc != 6)
		return (0);	
	data = treat_input(argv);
	if (!data)
		return (12);
	philo = creat_philo(data);
	return (0);
}