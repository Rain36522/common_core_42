/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:25:30 by pudry             #+#    #+#             */
/*   Updated: 2023/06/15 10:17:07 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		++ i;
	}
}
/*cette fonction ecris le pointer d un pointer commme un tableau 2D
 * Elle affiche ligne par ligne avec saut a la ligne */

void	ft_write_tabel(int arg_nb, char **arg_value)
{
	int	c;
	int	l;

	l = 0;
	c = 1;
	while (c < arg_nb)
	{
		l = 0;
		while (arg_value[c][l])
			write(1, &arg_value[c][l ++], 1);
		c ++;
		write(1, "\n", 1);
	}
}

int	main(int arg_nb, char **arg_value)
{
	int		i;
	int		imodif;
	char	*ccmp;

	imodif = 1;
	i = 1;
	while (imodif > 0 && arg_nb > 1)
	{
		i = 1;
		imodif = 0;
		while (arg_value[i + 1])
		{
			if (ft_strcmp(arg_value[i], arg_value[i + 1]) > 0)
			{
				ccmp = arg_value[i];
				arg_value[i] = arg_value[i + 1];
				arg_value[i + 1] = ccmp;
				imodif = 1;
			}
		i ++;
		}
	}
	ft_write_tabel(arg_nb, arg_value);
	return (0);
}
