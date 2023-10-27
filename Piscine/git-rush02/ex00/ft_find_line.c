/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanzi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:57:05 by ahanzi            #+#    #+#             */
/*   Updated: 2023/06/25 22:54:06 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str);

/* This function searches for the nbr line only in lines where numbers
 * from 10 to 19 appear in file_arr. When searching fot the nbr value, 
 * lines passed are counted using \n character qhich terminates each line. */
int	ft_specials_line(char cnbr, char *file_arr)
{
	unsigned int	i;
	unsigned int	in_line;

	i = 0;
	in_line = 0;
	while (file_arr[i])
	{
		if (file_arr[i] == '\n')
			in_line++;
		if (file_arr[i] == '1' && cnbr == file_arr[i + 1])
			return (in_line);
		i++;
	}
	return (in_line);
}

/* This function searches for the nbr line only in the tens
 * lines of file_arr. When searching fot the nbr value, lines 
 * passed are counted using \n character qhich terminates each line. */
int	ft_tens_line(char cnbr, char *file_arr)
{
	unsigned int	i;
	unsigned int	in_line;

	i = 0;
	in_line = 0;
	while (file_arr[i])
	{
		if (file_arr[i] == '\n')
			in_line++;
		if (file_arr[i + 1] == '0' && cnbr == file_arr[i])
		{
			if (file_arr[i + 2] == ' ' || file_arr[i + 2] == ':')
				return (in_line);
		}
		i++;
	}
	return (in_line);
}

/* This function searches for the nbr line in file_arr.
 * When searching fot the nbr value, lines passed are 
 * counted using \n character qhich terminates each line. */
int	ft_nbr_line(char cnbr, char *file_arr)
{
	unsigned int	i;
	unsigned int	in_line;

	i = 0;
	in_line = 0;
	while (file_arr[i])
	{
		if (file_arr[i] == '\n')
			in_line++;
		else if (cnbr == file_arr[i])
			return (in_line);
		i++;
	}
	return (in_line);
}

/* This function searches for the type line in file_arr.
 * When searching for the type value, lines passed are
 * counted using \n character which terminates each line. */
int	ft_type_line(char *ctype, char *file_arr)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen;
	unsigned int	it_line;

	i = 0;
	strlen = ft_strlen(ctype);
	it_line = 0;
	while (file_arr[i])
	{
		if (file_arr[i] == '\n')
			it_line++;
		j = 0;
		while (file_arr[i] == ctype[j])
		{
			i++;
			j++;
		}
		if ((file_arr[i] == ' ' || file_arr[i] == ':') && ctype[j] == '\0')
			return (it_line);
		i++;
	}
	if (file_arr[i] == '\0')
		return (0);
	return (it_line);
}
