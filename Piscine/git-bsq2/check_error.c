/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduffaut <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:47:43 by cduffaut          #+#    #+#             */
/*   Updated: 2023/06/28 19:02:48 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int	ft_strlen(char *array);

/* Rappel /!\ return(0) == Error, Return(1) == Good */

/* Line have the same len */
int	first_l(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len += 1;
	}
	return (len);
}

int	same_len(char **tab)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	len = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			len += 1;
			j += 1;
		}
		j = 0;
		i++;
		if (len != first_l(tab[0]))
			return (0);
		len = 0;
	}
	return (1);
}

int	ft_last_char(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (!(array[i][ft_strlen(array[i])] == '\n'))
			return (0);
		i ++;
	}
	return (1);
}

int	ft_autorised_symbol(struct map array)
{
	int	i;
	int	j;

	j = 0;
	while (array.a[j])
	{
		i = 0;
		while (array.a[j][i] && array.a[j][i] != '\n'
			&& (array.a[j][i] == array.o || array.a[j][i] == array.v))
			i ++;
		if (array.a[j][i] && array.a[j][i] != '\n')
			return (0);
		j ++;
	}
	if (array.v == array.o || !(array.o) || !(array.p))
		return (0);
	return (1);
}

int	ft_check_input(struct map array)
{
	int	ierror;

	ierror = 1;
	ierror *= same_len(array.a);
	ierror *= ft_last_char(array.a);
	ierror *= ft_autorised_symbol(array);
	return (ierror);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", same_len(argv));
	return (0);
}*/
