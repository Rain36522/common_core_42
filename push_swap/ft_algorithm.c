/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:03:19 by pudry             #+#    #+#             */
/*   Updated: 2023/10/27 17:14:24 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_lst_pos	*ft_solve_3(t_lst_pos *start, int cmd)
{
	t_stack	*ptr;
	int	i;

	i = 0;
	ptr = ft_get_stack(start, cmd);
	if (ft_check_sort(ptr) == 1)
		return (start);
	else if (ft_give_smaller_pos(ptr) == 3)
	{
			if (ptr->nbr > ptr->next->nbr)
				start = ft_s(start, cmd);;
			ptr = ft_get_stack(start, cmd);
			start = ft_rr(start, cmd);
			return (start);
	}
	while (ft_check_sort(ptr) == 0)
	{
		if (ft_give_smaller_pos(ptr) == 2)
			start = ft_s(start, cmd);
		else
			start = ft_rr(start, cmd);
		ptr = ft_get_stack(start, cmd);
	}
	return (start);
}

t_lst_pos	*ft_solve_5(t_lst_pos *start)
{
	start = ft_change_min(start);
	start = ft_change_max(start);
	start = ft_solve_3(start, 0);
	ft_p(start, 0);
	ft_r(start, 0);
	ft_p(start, 0);
	return (start);
}
