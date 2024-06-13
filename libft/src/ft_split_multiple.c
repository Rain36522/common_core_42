/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_multiple.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:32:14 by pudry             #+#    #+#             */
/*   Updated: 2024/06/13 16:45:18 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ft_split but take 2 char * (src and splits char)

#include "libft.h"

static int ft_is_in_str(char *str, char c)
{
    while (str && *str &&  *str != c)
        str ++;
    return (str && *str);
}

static int ft_array_size(char *str, char *str_c)
{
    int i;

    i = 0;
    while (str && *str)
    {
        if (ft_is_in_str(str_c, str))
        {
            i ++;
            while (ft_is_in_str(str_c, str))
                str ++;
        }
        else
            str ++;
    }
}

static int ft_word_size(char *str, char *str_c)
{
    int i;

    i = 0;
    while (str && str[i] && !ft_is_in_str(str_c, str[i]))
        i ++;
    return i;
}


char    **ft_split_multiple(char *str, char *str_c)
{
    char    **array;
    int     i;

    if (!str || !*str || !str_c || !*str_c)
        return NULL;
    array = (char **)malloc(sizeof(char*) * ft_array_size(str, str_c))
    while (*str)
    {
        while (*str)
    }
}