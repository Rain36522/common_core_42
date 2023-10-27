/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:51:47 by pudry             #+#    #+#             */
/*   Updated: 2023/10/27 17:06:54 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

//this function change the smaller number from stack a to stack b
t_lst_pos	*ft_change_min(t_lst_pos *start)
{
	if (ft_give_smaller_pos(start->strt_a) <= ft_cnt_stack(start->strt_a) / 2)
	{
		while (ft_give_smaller_pos(start->strt_a) != 1)
			start = ft_r(start, 0);
		start = ft_p(start, 1);
	}
	else
	{
		while (ft_give_smaller_pos(start->strt_a) != 1)
			start = ft_rr(start, 0);
		start = ft_p(start, 1);
	}
	return (start);
}
t_lst_pos	*ft_change_max(t_lst_pos *start)
{
	if (ft_give_biger_pos(start->strt_a) <= ft_cnt_stack(start->strt_a) / 2)
	{
		while (ft_give_biger_pos(start->strt_a) != 1)
			start = ft_r(start, 0);
		start = ft_p(start, 1);
	}
	else
	{
		while (ft_give_biger_pos(start->strt_a) != 1)
			start = ft_rr(start, 0);
		start = ft_p(start, 1);
	}
	return (start);
}