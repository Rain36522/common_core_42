/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:45:36 by pudry             #+#    #+#             */
/*   Updated: 2023/12/14 13:45:36 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	ft_put_philo(t_philo *philo)
{
	while (philo)
	{
		printf ("<=======================================================>\n");
		printf("id : %i\n", philo->philo_id);
		printf("time to eat : %i\n", philo->t_eat);
		printf("time to sleep : %i\n", philo->t_sleep);
		printf("time to die : %i\n", philo->t_die);
		printf("ifork : %i\n", philo->ifork);
		printf("n eat : %i\n", philo->n_eat);
		printf("start time : %u\n", philo->istrt);
		if (philo->iright_fork)
			printf("left : %i, right : %i\n", philo->ileft_fork, *philo->iright_fork);
		printf ("<=======================================================>\n");
		philo = philo->next;
	}
}

int	main(int argc, char **argv)
{
	t_data	*data;
	t_philo	*philo;

	if (argc < 5 || argc > 6)
	{
		printf("Error : Arguments invalide");
		return (201);
	}
	data = treat_input(argv);
	if (!data)
		return (12);
	data->istart_time = time_to_ms();
	philo = creat_philo(data);
	ft_put_philo(philo);
	launch_philo(philo);
	while (data->irun == 1);
	printf("fini\n");
	return (0);
}
