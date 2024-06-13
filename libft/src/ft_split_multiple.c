/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:58:54 by pudry             #+#    #+#             */
/*   Updated: 2024/06/13 17:58:54 by pudry            ###   ########.ch       */
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
        if (ft_is_in_str(str_c, *str))
        {
            i ++;
            while (ft_is_in_str(str_c, *str))
                str ++;
            if (!*str)
                i --;
        }
        else
            str ++;
    }
    return (i + 1);
}

static int ft_word_size(char *str, char *str_c)
{
    int i;

    i = 0;
    while (str && str[i] && !ft_is_in_str(str_c, str[i]))
        i ++;
    return i;
}

static char **ft_init_array(char *str, char *str_c)
{
    char    **array;

    if (!str || !*str || !str_c || !*str_c)
        return NULL;
    array = (char **)malloc(sizeof(char*) * ft_array_size(str, str_c));
    if (array)
        array[ft_array_size(str, str_c) - 1] = NULL;
    return (array);
}


char    **ft_split_multiple(char *str, char *str_c)
{
    char    **array;
    int     j;

    array = ft_init_array(str, str_c);
    if (!array)
        return (NULL);
    j = 0;
    while (*str)
    {
        while (str && *str && ft_is_in_str(str_c, *str))
            str ++;
        if (!str || !*str)
            break;
        array[j] = ft_strldup(str, ft_word_size(str, str_c));
        if (!array[j])
        {
            while (j > 0)
                free(array[--j]);
            free(array);
            return (NULL);
        }
        j ++;
        str += ft_word_size(str, str_c);
    }
    return (array);
}

// int main(int argc, char **argv)
// {
//     char    **array;
//     char    **ptr;

//     if (argc != 3)
//         exit(1);
//     array = ft_split_multiple(argv[1], argv[2]);
//     ptr = array;
//     while (*array)
//     {
//         printf("%s|\n", *array);
//         free(*array);
//         array ++;
//     }
//     free(ptr);

// }
