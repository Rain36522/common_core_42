/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_philo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:05:24 by pudry             #+#    #+#             */
/*   Updated: 2023/12/09 20:05:53 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static t_philo	*create_philo(t_data *data)
{
	t_philo		*philo;

	philo = (t_philo *) malloc(sizeof(t_philo));
	if (!philo)
		return (NULL);
	philo->ieat = data->t_eat;
	philo->ifork = 0;
	philo->iactivity = 0;
	return (philo);
}

static t_philo	*philo_add_back(t_data *data, t_philo *philo)
{
	
}

t_philo	*creat_philo(t_data *data)
{
	int		i;
	t_philo	*philo;

	i = 0;
	philo = NULL;
	while (i <= data->ifork)
	{
		philo = philo_add_back(data, philo);
		i ++;
	}
}