/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:09:17 by pudry             #+#    #+#             */
/*   Updated: 2023/12/08 19:09:21 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <pthread>

typedef struct s_philo
{
	unsigned int	ifork;
	unsigned int	t_eat;
	unsigned int	t_sleep;
	unsigned int	t_die;
	unsigned int	t_activity;
	s_philo			*next;
}				t_philo

#endif