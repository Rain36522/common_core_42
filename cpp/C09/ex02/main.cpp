/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:47:35 by pudry             #+#    #+#             */
/*   Updated: 2024/02/16 12:48:31 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#define DEBUG std::cout << "\033[31m" << __FILE__ << __LINE__ << "\033[0m" << std::endl;


void	vector_solve(std::vector<int> vinit, int argc);

static bool	returnError(std::string s)
{
	std::cerr << s << std::endl;
	return false;
}

static bool	checkInput(int argc, char **a)
{
	int	j;

	if (argc == 1)
		return returnError("No argument in input.");
	for (int i = 1; i < argc; i ++)
	{
		j = 0;
		while (a[i][j])
		{
			if (!isdigit(a[i][j]))
				return returnError("Invalide argument in input.");
			j ++;
		}
		if (j > 9 || (j == 9 && strcmp(a[i], "2147483647") > 0))
			return returnError("Overange number.");
	}
	return true;
}

int	main(int argc, char **argv)
{
	std::vector<int>	vinit;

	if (!checkInput(argc, argv))
		return 1;
	DEBUG
	for (int i = 1; i < argc; i++)
		vinit.push_back(atoi(argv[i]));
	DEBUG
	vector_solve(vinit, argc - 1);
	return 0;
}