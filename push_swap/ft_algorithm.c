/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:32:52 by pudry             #+#    #+#             */
/*   Updated: 2023/10/29 11:40:06 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_lst_pos	*ft_solve_3(t_lst_pos *start, int cmd)
{
	t_stack	*ptr;

	ptr = ft_get_stack(start, cmd);
	if (ft_check_sort(ptr) == 1)
		return (start);
	else if (ft_give_smaller_pos(ptr) == 3)
	{
		if (ptr->nbr > ptr->next->nbr)
			start = ft_s(start, cmd);
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
	start = ft_change_max(start, 0);
	start = ft_solve_3(start, 0);
	ft_p(start, 0);
	ft_r(start, 0);
	ft_p(start, 0);
	return (start);
}
/*
t_lst_pos	*ft_solve_100(t_lst_pos *start)
{
	int	i;
	int	isize;

	isize = ft_cnt_stack(start->strt_a);
	i = 0;
	while (ft_check_sort(start->strt_a))
	{
		while (i < 20)
		{
			start = ft_p(start, 0);
			i ++;
		}
		while (start->strt_b)
		{
			start = ft_change_max(start, 1);
			if (ft_give_biger_pos(start->strt_b) < ft_cnt_stack(start->strt_b) / 2)
				start = ft_r(start, 2);
			else
				start = ft_r(start, 0)
		}
	}
}*/

t_lst_pos	*ft_radix(t_lst_pos *start)
{
	unsigned int	ibit;
	int				isize;

	ibit = 1;
	while (ibit < 2147483648 || !ft_check_sort(start->strt_a))
	{
		if (ft_check_bit(start->strt_a, ibit) != 2)
		{
			ibit *= 2;
		}
		isize = ft_cnt_stack(start->strt_a);
		while (isize > 0)
		{
			if (start->strt_a->nbr / ibit %2 == 1)
				start = ft_r(start, 0);
			else
				start = ft_p(start, 1);
			isize --;
		}
		ibit *= 2;
		while (start->strt_b)
			start = ft_p(start, 0);
	}
	return (start);
}
