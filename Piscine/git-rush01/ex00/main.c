/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:43:58 by pudry             #+#    #+#             */
/*   Updated: 2023/06/18 23:05:56 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_write_header(char array[6][6]);
void	ft_print_array(char array[6][6]);	
void	ft_place_4(char array[6][6]);
void	ft_place_1234(char array[6][6]);
void	ft_place_last4(char array[6][6]);
void	ft_place_3_by_4(char array[6][6]);
int		ft_place_3_by_header(char array[6][6]);
void	ft_return_error(void);
void	ft_print_array(char array[6][6]);
int		ft_check_array_header_angl(char array[6][6]);
int		ft_check_array_header_side(char array[6][6]);
//This function are used in the while loop for try to sove the array
int		ft_check_last_number(char array[6][6]);
int		ft_place_last_number_in_line(char array[6][6]);
int		ft_specific(char array[6][6]);
int		ft_finish_check(char array[6][6]);

/*This function will write the header.
 * 1 the first line
 * 2 the last line
 * 3 the first column
 * 4 the last column*/
void	ft_write_array_header_line(char array[6][6], char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		array[i][0] = str[j];
		j += 2;
		i ++;
	}
	i = 1;
	while (i < 5)
	{
		array[i][5] = str[j];
		j += 2;
		i ++;
	}
}

void	ft_write_array_header_column(char array[6][6], char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 16;
	while (i <= 4)
	{
		array[0][i] = str[j];
		j += 2;
		i ++;
	}
	i = 1;
	while (i <= 4)
	{
		array[5][i] = str[j];
		j += 2;
		i ++;
	}
}

int	ft_solve_array(char array[6][6])
{
	int		imodif;

	imodif = 0;
	ft_place_4(array);
	ft_place_1234(array);
	ft_place_last4(array);
	ft_place_3_by_4(array);
	while (imodif <= 2)
	{
		if (ft_finish_check(array) >= 1)
			return (1);
		if (ft_check_last_number(array) >= 1)
			continue ;
		else if (ft_place_last_number_in_line(array) >= 1)
			continue ;
		else if (ft_specific(array) >= 1)
			continue ;
		else if (ft_place_3_by_header(array) >= 1)
			continue ;
		else
		{
			return (0);
		}
	}
	return (0);
}

int	ft_check_user_input(char *ptr)
{
	int	i;
	int	nvalue;
	int	spacevalue;

	i = 0;
	nvalue = 0;
	spacevalue = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == ' ' && ptr[i - 1] >= '1' && ptr[i - 1] <= '4')
			spacevalue++;
		else if (ptr[i] >= '1' && ptr[i] <= '4')
			nvalue++;
		i++;
	}
	if ((nvalue == 16 && spacevalue == 15) && (i == 31))
		return (1);
	else
		return (0);
}
/*This is the main file. thy will pass by all step for solve the exercice.
 * In first, we check the user input. After that, we put all them in a array.
 * When all is ready, we start to full the array. By starting with number 4.
 * After that, we full by other number.*/

int	main(int arg_n, char **arg_v)
{
	char	array[6][6];
	int		i;

	i = 1;
	if (arg_n <= 1)
	{
		ft_return_error();
		return (0);
	}
	else if (ft_check_user_input(arg_v[1]) == 0)
	{
		ft_return_error();
		return (0);
	}
	ft_write_array_header_line(array, arg_v[1]);
	ft_write_array_header_column(array, arg_v[1]);
	i *= ft_check_array_header_angl(array);
	i *= ft_check_array_header_side(array);
	i *= ft_solve_array(array);
	if (i == 0)
		ft_return_error();
	else
		ft_print_array(array);
	return (0);
}
