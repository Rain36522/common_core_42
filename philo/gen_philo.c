/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_philo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:10:24 by pudry             #+#    #+#             */
/*   Updated: 2023/12/09 20:10:24 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*ft_free_philo(t_philo	*philo)
{
	while (philo)
	{
		free(philo);
		philo = philo->next;
	}
	return (NULL;)
}

static t_philo	*create_philo(t_data *data)
{
	t_philo		*philo;

	philo = (t_philo *) malloc(sizeof(t_philo));
	if (!philo)
		return (NULL);
	philo->t_eat = data->t_eat;
	philo->t_sleep = data->t_sleep;
	philo->ileft_fork = 1;
	philo->next = NULL;
	philo->iactivity = 0;
	philo->irun = &data->irun;
	philo->philo_id = 1;
	philo->ifork = 0;
	return (philo);
}

static t_philo	*philo_add_back(t_data *data, t_philo *philo)
{
	t_philo	*mem_philo;

	if (!philo)
		return (creat_philo(data));
	mem_philo = philo->next;
	while (philo->next)
		philo = philo->next;
	philo->next = creat_philo(data);
	if (!philo->next)
		return (ft_free_philo(mem_philo));
	philo->next->iright_fork = &philo->ileft_fork;
	philo->next->philo_id = philo->philo_id + 1;
	return (mem_philo);	
}

t_philo	*creat_philo(t_data *data)
{
	int		i;
	t_philo	*philo;
	t_philo	*mem_philo;

	i = 0;
	philo = NULL;
	while (i <= data->ifork)
	{
		philo = philo_add_back(data, philo);
		i ++;
	}
	if (!philo)
		return (NULL);
	mem_philo = philo;
	while (philo->next)
		philo = philo->next;
	philo->iright_fork = &mem_philo->ileft_fork;
	return (mem_philo);
}
