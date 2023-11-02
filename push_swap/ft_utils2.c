/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:57:06 by pudry             #+#    #+#             */
/*   Updated: 2023/10/31 12:14:37 by pudry            ###   ########.fr       */
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
	t_stack	*ptr;

	ptr = ft_get_stack(start, cmd);
	if (ft_give_biger_pos(ptr) <= ft_cnt_stack(ptr) / 2)
	{
		while (ft_give_biger_pos(ptr) != 1)
			start = ft_r(start, cmd);
	}
	else
	{
		while (ft_give_biger_pos(ptr) != 1)
				start = ft_rr(start, cmd);
	}
	start = ft_p(start, 1);
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
	ibit ++;
	if (!start->strt_a)
	{
		while (start->strt_b)
			start = ft_p(start, 0);
		return (start);
	}
	while (start->strt_b)
		start = ft_p(start, 0);
	return (start);
}
// && ft_check_bit(start->strt_b, ibit) != 0