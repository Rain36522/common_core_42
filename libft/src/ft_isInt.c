#include "libft.h"


int ft_isInt(char *str)
{
    int i;
    int isNegatif;

    i = 0;
    isNegatif = *str && str[0] == '-';
    if (!*str || ft_strlen(str) > 11)
        return 0;
    if (isNegatif && ft_strcmp("-2147483648", str))
        str ++;
    else if (isNegatif)
        return -1;
    while (str[i] && ft_isdigit(str[i]))
        i ++;
    if (!str[i] && ft_strlen(str) < 10 && !isNegatif)
        return (1);
    else if (!str[i] && ft_strlen(str) < 10)
        return (-1);
    if (isNegatif && !str[i] && ft_strcmp("2147483647", str) >= 0)
        return (-1);
    return (!str[i] && ft_strcmp("2147483647", str) >= 0);
}
