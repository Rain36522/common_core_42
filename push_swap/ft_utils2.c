/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:57:06 by pudry             #+#    #+#             */
/*   Updated: 2023/10/29 10:57:26 by pudry            ###   ########.ch       */
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

//from and to includ || if 0: from start else from end NOT USED FOR THE MOMENT
int	ft_best_biger_pos(t_stack *stck, int from, int to)
{
	int		i;
	int		j;
	int		isize;
	t_stack	*ptr;

	i = 0;
	ptr = stck;
	isize =  ft_cnt_stack(stck);
	while (stck->nbr > to && stck->nbr < from && i <= isize)
	{
		i ++;
		stck = stck->next;
	}
	j = 0;
	while (i + j ++ < isize / 2)
		stck = stck->next;
	while (ptr->nbr > to && ptr->nbr < from)
	{
		j = isize / 2;
		ptr = stck;
		while (j ++ < isize )
			ptr = ptr->next;
		isize --;
	}
	return (j - isize + 1 / 2 > i);
}
// if all nbr bit x same bit return bit. else return 2 
int	ft_check_bit(t_stack *ptr, unsigned int ibit)
{
	int		ivalue;

	ivalue = ptr->nbr / ibit %2;
	ptr = ptr->next;
	while (ptr)
	{
		if (ptr->nbr / ibit %2 != ivalue)
			return (2);
		ptr = ptr->next;
	}
	return (ivalue);
}
