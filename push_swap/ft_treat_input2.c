/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_input2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:33:26 by pudry             #+#    #+#             */
/*   Updated: 2023/10/27 19:52:46 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_stack	*ft_duplicate_stack(int	isize)
{
	t_stack	*ptr;
	t_stack	*mem_ptr;

	ptr = (t_stack *) malloc(sizeof(t_stack) * 1);
	if (!ptr)
		return (NULL);
	mem_ptr = ptr;
	ptr->nbr = 0;
	ptr->next = NULL;
	while (isize > 1)
	{
		printf("isize : %i\n", isize);
		ptr = ft_new_lst_back(0, ptr);
		printf("add back\n");
		if (!ptr)
			return (NULL);
		isize  --;
	}
	printf("fini\n");
	return (mem_ptr);
}

static void	ft_put_value_pos(int pos, int nbr, t_stack *ptr)
{
	while (pos > 0)
	{
		pos --;
		ptr = ptr->next;
	}
	ptr->nbr = nbr;
}


static void	ft_stack_clear(t_stack *start)
{
	t_stack	*ptr;

	ptr = start;

	while (start)
	{
		ptr = start;
		start = start->next;
		free(ptr);
	}
}

t_stack	*ft_simplify_stack(t_stack *ptr1)
{
	t_stack	*ptr2;
	int		i;
	int		j;
	int		isize;

	printf("68\n");
	if (!ptr1)
		return (NULL);
	isize = ft_cnt_stack(ptr1);
	ptr2 = ft_duplicate_stack(isize);
	printf("73 dup\n");
	i = ft_give_biger_pos(ptr1);
	ft_put_value_pos(i, 2147483647, ptr1);
	ft_put_value_pos(i, isize, ptr2);
	isize --;
	j = 0;
	while (isize > 0)
	{
		i = ft_give_smaller_pos(ptr1);
		ft_put_value_pos(i, 2147483647, ptr1);
		ft_put_value_pos(i, j ++, ptr2);
		isize --;
	}
	printf("86 clearing\n");
	ft_stack_clear(ptr1);
	printf("88. cleared\n");
	return (ptr2);
}

int	ft_check_double_value(int nArg, char **Args)
{
	int	i;
	int	j;

	i = 0;
	while (i < nArg)
	{
		j = i + 1;
		while (j < nArg)
		{
			if (ft_strncmp(Args[i], Args[j], 10) == 0)
				return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}