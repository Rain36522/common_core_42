/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_solve.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:19 by pudry             #+#    #+#             */
/*   Updated: 2024/02/14 09:11:57 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

static void	printVector(std::vector<int> v)
{
	std::cout << "Vector value : ";
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i];
		if (i = v.size() - 1)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}
}

void	solveVector(std::vector<int> v)
{

}

void	vector_solve(std::vector<int> vinit, int isize)
{
	std::vector<std::vector<int>>	varray;
	int								i;
	int								j;

	j = 0;
	i = 0;
	while (j < isize)
	{
		varray[i].push_back(vinit[j ++]);
		if (j < isize)
			varray[i ++].push_back(vinit[j ++]);
	}
	while (varray[0].size() != vinit.size())
	{
		for (int k = 0; k < varray.size(); k ++)
			varray[k] = solveVector(varray[k])
	}
}