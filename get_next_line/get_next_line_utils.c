/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:11:43 by pudry             #+#    #+#             */
/*   Updated: 2023/10/18 15:02:36 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_endl(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i ++;
	return (i);
}

int	ft_strchr(char *ptr)
{
	char	c;

	c = '\0';
	if (!ptr)
		return (0);
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (1);
		ptr ++;
	}
	return (0);
}

char	*ft_strcat(char *s1, char *s2)
{
	int		isize;
	char	*str;
	int		i;

	i = 0;
	isize = ft_strlen_endl(s1) + ft_strlen_endl(s2) + 1;
	str = (char *) malloc(sizeof(char) * (isize + 1));
	if (!str)
		return (NULL);
	str[isize] = '\0';
	while (i < ft_strlen_endl(s1))
	{
		str[i] = s1[i];
		i ++;
	}
	while (s2[i - ft_strlen_endl(s1)] && str[i - ft_strlen_endl(s1)] != '\n')
	{
		str[i] = s2[i - ft_strlen_endl(s1)];
		i ++;
	}
	return (str);
}

char	*ft_remove_line(char *str)
{
	char	*s;
	int		isize;
	int		line_sz;

	isize = 0;
	line_sz = ft_strlen_endl(str) + 1;
	while (str[isize])
		isize ++;
	isize = isize - line_sz + 1;
	s = (char *) malloc(sizeof(char) * (isize + 1));
	if (!s)
		return (NULL);
	s[isize] = '\0';
	isize = 0;
	while (str[line_sz + isize])
	{
		s[isize] = str[isize + line_sz];
		isize ++;
	}
	free(str);
	return (s);
}

char	*ft_give_line(char *s)
{
	int		isize;
	int		i;
	char	*line;

	i = 0;
	isize = ft_strlen_endl(s) + 1 + ft_strchr(s);
	line = (char *) malloc(sizeof(char) * (isize + 1));
	if (!line)
		return (NULL);
	line[isize] = '\0';
	while (i < isize)
	{
		line[i] = s[i];
		i ++;
	}
	//printf("before : %s\nafter : %s\n", s, line);
	return (line);
}
