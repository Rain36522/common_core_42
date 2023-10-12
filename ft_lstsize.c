/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:28:57 by pudry             #+#    #+#             */
/*   Updated: 2023/10/12 15:38:56 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;
	
	if (!lst)
		return (0);
	i = 0;
	ptr = lst->next;
	while (ptr->next != NULL)
	{
		i ++;
		ptr = ptr->next;
	}
	return (i);
}