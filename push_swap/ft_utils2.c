/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:57:06 by pudry             #+#    #+#             */
/*   Updated: 2023/10/30 16:09:45 by pudry            ###   ########.fr       */
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

t_lst_pos	*ft_change_max(t_lst_pos *start, int cmd)
{
	t_stack	*from;

	from = ft_get_stack(start, cmd);
	if (ft_give_biger_pos(from) <= ft_cnt_stack(from) / 2)
	{
		while (ft_give_biger_pos(from) != 1)
			start = ft_r(start, cmd);
		start = ft_p(start, cmd);
	}
	else
	{
		while (ft_give_biger_pos(from) != 1)
			start = ft_rr(start, cmd);
		start = ft_p(start, cmd);
	}
	return (start);
}

// if all nbr bit x same bit return bit. else return 2 
int	ft_check_bit(t_stack *ptr, unsigned long ibit)
{
	int		ivalue;

	if (!ptr)
		return (2);
	ivalue = ptr->nbr / ibit % 2;
	ptr = ptr->next;
	while (ptr)
	{
		if (ptr->nbr / ibit % 2 != ivalue)
			return (2);
		ptr = ptr->next;
	}
	return (ivalue);
}

t_lst_pos	*ft_return_b(t_lst_pos *start, unsigned long ibit)
{
	if (!start->strt_a)
	{
		while (start->strt_b)
			start = ft_p(start, 0);
		return (start);
	}
	while (start->strt_b && ft_check_bit(start->strt_b, ibit) != 0)
		start = ft_p(start, 0);
	return (start);
}
