/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 08:53:43 by pudry             #+#    #+#             */
/*   Updated: 2023/06/28 18:59:56 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include <unistd.h>

void		ft_init_solve(struct map array);
struct map	crea_strut(char *txt);
void		ft_put_array(struct map array);
int			ft_check_obstacl(struct map array);
void		ft_free(char **array);
int			ft_check_input(struct map array);

void	ft_solve_problem(char *file_name)
{
	struct map	array;
	int			ierror;

	ierror = 1;
	array = crea_strut(file_name);
	if (array.a)
		ierror = ft_check_input(array);
	else
	{
		write(1, "Error map\n", 10);
		return ;
	}
	if (ft_check_obstacl(array) == 1)
		ft_put_array(array);
	else if (ierror == 1)
		ft_init_solve(array);
	else
	{
		ft_free(array.a);
		write(1, "Error map\n", 10);
	}
}

int	main(int arg_n, char **arg_v)
{
	int	i;

	i = 1;
	if (arg_n <= 1)
		write(1, "Error map\n", 10);
	while (i < arg_n)
	{
		ft_solve_problem(arg_v[i]);
		i ++;
	}
	return (0);
}
