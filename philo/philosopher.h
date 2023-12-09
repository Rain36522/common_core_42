/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:05:56 by pudry             #+#    #+#             */
/*   Updated: 2023/12/09 20:06:00 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>

typedef struct s_data {
	int		ifork;
	int		t_die;
	int		t_eat;
	int		t_sleep;
	int		n_eat;
	s_data	*next;
}			t_data;

typedef struct s_philo {
	int		iactivity;
	int		ieat;
	int		istart;
	int		ifork;
	s_philo	*prev;
	s_philo	*next;
}		t_philo;

t_data		*treat_input(char **argv);

#endif