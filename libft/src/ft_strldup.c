/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_multiple.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:58:57 by pudry             #+#    #+#             */
/*   Updated: 2024/06/13 17:58:57 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

// Duplicate x char of string.
#include "libft.h"
char    *ft_strldup(const char *src, size_t n)
{
    size_t  i;
    char    *ptr;

    i = 0;
    if (ft_strlen(src) < n)
        n = ft_strlen(src);
    ptr = (char *)malloc(sizeof(char) * (n + 1));
    if (!ptr)
        return (NULL);
    ptr[n] = '\0';
    while (i < n)
    {
        ptr[i] = src[i];
        i ++;
    }
    return (ptr);
}
