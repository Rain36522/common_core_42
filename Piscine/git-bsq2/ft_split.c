/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduffaut <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:18:30 by cduffaut          #+#    #+#             */
/*   Updated: 2023/06/28 17:42:46 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*int	is_charset(char *charset, char c)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (charset[j] == c)
		{
			return (1);
		}
		j += 1;
	}
	return (0);
}*/

int	str_nbr(char *str)
{
	int	i;
	int	nbr;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '\n' && str[i])
		{
			i++;
		}
		if (str[i] == '\n')
		{
			i++;
			nbr++;
		}
	}
	nbr += 1;
	return (nbr);
}

int	char_nbr(char *str, int i)
{
	int	nbr;

	nbr = 0;
	while (str[i] != '\n' && str[i])
	{
		nbr += 1;
		i += 1;
	}
	nbr += 2;
	return (nbr);
}

char	*copy_paste(char *str, int i)
{
	char	*tab2;
	int		j;

	j = 0;
	tab2 = malloc (sizeof(char) * char_nbr(str, i));
	while (str[i] != '\n' && str[i])
	{
		tab2[j] = str[i];
		j += 1;
		i += 1;
	}
	tab2[j] = '\n';
	tab2[j + 1] = '\0';
	return (tab2);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tab = malloc(sizeof(*tab) * (str_nbr(str) + 1));
	if (!tab)
		return (0);
	while (str[j])
	{
		if (str[j] == '\n' && str[j])
			j += 1;
		if (str[j])
		{
			tab[i] = copy_paste(str, j);
			i += 1;
		}
		while (str[j] != '\n' && str[j])
			j += 1;
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void)
{
	char *str = "..........";
	char **tab;
	int  i = 0;

	tab = ft_split(str);
	while (tab[i] != 0)
	{
		printf ("%s\n", tab[i]);
		i += 1;
	}
	printf ("%s\n", tab[i]);
	return (0);
}*/
