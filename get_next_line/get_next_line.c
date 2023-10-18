/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:19:21 by pudry             #+#    #+#             */
/*   Updated: 2023/10/18 15:03:15 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strchr(char *ptr);
char	*ft_give_line(char *s);
char	*ft_remove_line(char *str);
char	*ft_strcat(char *s1, char *s2);



char	*get_next_line(int fd)
{
	static char	*str;
	char		*actual_str;
	char		*line;
	int			i;

	i = BUFFER_SIZE;
	if (!str)
		str = (char *) malloc(sizeof(char) * BUFFER_SIZE);
	if (!str)
		return (NULL);
	//printf("actual_str : %s\n", str);
	actual_str = 0;
	while (BUFFER_SIZE == i && !(ft_strchr(str)))
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i > 0)
			actual_str = ft_strcat(actual_str, str);
	}
	if (i < 0)
		free(actual_str);
	if (i < 0)
		return (NULL);
	if (!actual_str)
		actual_str = str;
	printf("actual : %s\n", actual_str);
	str = ft_remove_line(str);
	line = ft_give_line(actual_str);
	printf("line : %s\n", line);
	//free(actual_str);
	return (line);
}

int	main(void)
{
	int	fd;
	int	i;
	char *str;

	printf("<=======================================================================================================================================>\n");
	i = 0;
	fd = open("test.txt", O_RDWR);
	if (fd < 0)
	{
		printf("error open file");
		return(fd);
	}
	while (i < 3)
	{
		printf("---------------------------------------------------------------------------------------------------------\n");
		str = get_next_line(fd);
		printf("returned : %s\n", str);
		i ++;
	}
	return(fd);
	
	
}
