/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:07:35 by pudry             #+#    #+#             */
/*   Updated: 2023/10/12 14:27:56 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ptr;

	ptr = (t_list *) malloc(sizeof(t_list) * 1);
	if (!ptr)
		return (NULL);
	ptr->content = (void *) malloc(sizeof(void *) * 1);
	ptr->next = NULL;
	if (!ptr->content)
		return (NULL);
	ptr->content = content;
	return (ptr);
}
