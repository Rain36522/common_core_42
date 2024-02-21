/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:32:16 by pudry             #+#    #+#             */
/*   Updated: 2024/02/18 22:32:42 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	vector_solve(std::vector<int> vinit, int argc);
void	deque_solve(std::deque<int> vinit, int isize);

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
		if (j > 10 || (j == 10 && strcmp(a[i], "2147483647") > 0))
			return returnError(("Overange number : " + std::string(a[i])));
	}
	return true;
}

int	main(int argc, char **argv)
{
	std::vector<int>		vinit;
	std::deque<int>			dinit;
	int						n;
	clock_t					start;
	clock_t					stop;


	if (!checkInput(argc, argv))
		return 1;
	for (int i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		vinit.push_back(n);
		dinit.push_back(n);
	}
	std::cout << YELLOW << "< ========= SOLVING VECTOR ============>" << std::endl << BLUE;
	start = clock();
	vector_solve(vinit, argc - 1);
	stop = clock();
	std::cout << GREEN << "Time to solve : " << std::to_string((stop - start) / 1000.0) << "us" << std::endl;
	std::cout << YELLOW << "< ========= SOLVING DEQUE ============>" << std::endl << BLUE;
	start = clock();
	deque_solve(dinit, argc - 1);
	stop = clock();
	std::cout << GREEN << "Time to solve : " << std::to_string((stop - start) / 1000.0) << "us" << std::endl;
	return 0;
}