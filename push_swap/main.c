/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:12:18 by pudry             #+#    #+#             */
/*   Updated: 2023/10/27 17:40:55 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_mvstacks(t_lst_pos *start)
{
	char	s[] = "salut";
	int		i;

	ft_put_stacks(start);
	i = 0;
	while (ft_strncmp("break", s, 5) != 0)
	{
		printf("\ncmd : ");
		scanf("%5s", s);
		printf("\n");
		if (s[0] == 's')
		{
			if(s[1] == 'a')
				ft_s(start, 0);
			else if (s[1] == 'b')
				ft_s(start, 1);
			else
				ft_s(start, 2);
		}
		else if (s[0] == 'p')
		{
			if (s[1] == 'a')
				ft_p(start, 0);
			else
				ft_p(start, 1);
		}
		else if (ft_strlen(s) == 2)
		{
			if(s[1] == 'a')
				ft_r(start, 0);
			else if (s[1] == 'b')
				ft_r(start, 1);
			else
				ft_r(start, 2);
		}
		else if (ft_strlen(s) == 3)
		{
			if(s[2] == 'a')
				ft_rr(start, 0);
			else if (s[2] == 'b')
				ft_rr(start, 1);
			else
				ft_rr(start, 2);
		}
		ft_put_stacks(start);
		i ++;
		printf ("N action : %i", i);
	}
	ft_lst_clear(start);
	return (0);
}

int	main(int nArg, char **Args)
{
	t_lst_pos	*start;

	start = check_input(nArg, Args);
	if (!start)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	//ft_put_stacks(start);
	//ft_mvstacks(start);
	//start = ft_solve_3(start, 0);
	start = ft_solve_5(start);
	//ft_put_stacks(start);
	return (0);
}
