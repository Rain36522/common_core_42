/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanzi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:54:45 by ahanzi            #+#    #+#             */
/*   Updated: 2023/06/25 22:54:17 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_specials_line(char cnbr, char *file_arr);
int		ft_tens_line(char cnbr, char *file_arr);
int		ft_nbr_line(char cnbr, char *file_arr);
int		ft_type_line(char *ctype, char *file_arr);
char	*ft_get_strs(char *file_arr, int in_line, int it_line, char *ctype);

/* This function counts the dictionary file length in char, which is 
 * used to create a dynamic array. Inside it is stored the content of 
 * the dictionary file + a terminating null character. Count arg in
 * read(int fd, void *buf, size_t count) is unsigned int. */
char	*ft_file_arr(char *file_name, int ifd)
{
	unsigned int		buf;
	unsigned int		len;
	char				*file_arr;

	buf = 2;
	len = 0;
	file_arr = 0;
	while (read(ifd, &buf, 1))
		len++;
	close(ifd);
	ifd = open(file_name, O_RDONLY);
	if (ifd > 0)
	{
		file_arr = (char *)malloc(sizeof(char) * (len + 2));
		if (read(ifd, file_arr, len) != -1)
		{
			file_arr[len + 1] = '\n';
			file_arr[len + 2] = '\0';
		}
		else
			*file_arr = 0;
	}
	return (file_arr);
}

/* This function checks the type first. If type = 0, it calls only
 * for ft_type_line. If type = 1 (unit), it calls only for ft_nbr_line. 
 * If type = 2 (11 to 19), it calls ft_specials_line. 
 * If type = 10 (20 to 90), it calls ft_tens_line. In those cases, 
 * it_line = -1 and ft_get_strs is called. In others cases, functions 
 * to get nbr and type lines are called and their return values are used 
 * to call ft_get_strs. */
char	*ft_find_strs(char *file_arr, char cnbr, char *ctype)
{
	unsigned int	in_line;
	unsigned int	it_line;
	char			*str;

	str = 0;
	in_line = -1;
	it_line = -1;
	if (cnbr == '0' && ctype[1] != '\0')
		it_line = ft_type_line(ctype, file_arr);
	else if (ctype[0] == '1' && ctype[1] == '\0')
		in_line = ft_nbr_line(cnbr, file_arr);
	else if (ctype[0] == '2')
		in_line = ft_specials_line(cnbr, file_arr);
	else if (ctype[0] == '1' && ctype[1] == '0' && ctype[2] == '\0')
		in_line = ft_tens_line(cnbr, file_arr);
	else
	{	
		in_line = ft_nbr_line(cnbr, file_arr);
		it_line = ft_type_line(ctype, file_arr);
	}
	str = ft_get_strs(file_arr, in_line, it_line, ctype);
	return (str);
}

/* This function receives the dictionary file name which is used to 
 * open the file. If the opening succeeds, the return value (ifd for 
 * file descriptor) and the file name are sent to ft_file_arr. The 
 * remaining arguments, char number and its type (unit, tens, etc.), 
 * + the return value of file_arr are sent to ft_find_strs. */
char	*ft_read_dic(char cnbr, char *ctype, char *file_name)
{
	int		ifd;
	char	*file_arr;
	char	*str;

	str = 0;
	ifd = open(file_name, O_RDONLY);
	if (ifd > 0)
	{
		file_arr = ft_file_arr(file_name, ifd);
		if (*file_arr != 0 || file_arr[0] != '\0')
		{
			str = ft_find_strs(file_arr, cnbr, ctype);
		}
	}
	return (str);
}
/*
int	main(void)
{
	ft_read_dic('0', "1", "numbers.dict");
	ft_read_dic('1', "1", "numbers.dict");
	ft_read_dic('2', "1", "numbers.dict");
	ft_read_dic('9', "1", "numbers.dict");
	ft_read_dic('0', "2", "numbers.dict");
	ft_read_dic('1', "2", "numbers.dict");
	ft_read_dic('9', "2", "numbers.dict");
	ft_read_dic('0', "10", "numbers.dict");
	ft_read_dic('1', "10", "numbers.dict");
	ft_read_dic('9', "10", "numbers.dict");
	ft_read_dic('0', "100", "numbers.dict");
	ft_read_dic('1', "100", "numbers.dict");
	ft_read_dic('9', "100", "numbers.dict");
	ft_read_dic('0', "1000", "numbers.dict");
	ft_read_dic('0', "1000000000000", "numbers.dict");
	ft_read_dic('0', "1000000000000000000", "numbers.dict");
	ft_read_dic('0', "1000000000000000000000000", "numbers.dict");
	ft_read_dic('0', "1000000000000000000000000000000", "numbers.dict");
	return (0);
}
*/
