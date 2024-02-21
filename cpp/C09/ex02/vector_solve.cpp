/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_solve.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:30:00 by pudry             #+#    #+#             */
/*   Updated: 2024/02/18 22:30:04 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static void	printVector(std::vector<int> v)
{
	std::cout << "Vector value : ";
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i];
		if (i == v.size() - 1)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}
}

std::vector<int>	solveVector(std::vector<int> v)
{
	std::vector<int>	vout;
	bool				wr;
	size_t				k;

	vout.push_back(v[0]);
	for (int i = 1; i < v.size(); i ++)
	{
		wr = false;
		k = vout.size();
		for (size_t j = 0; j < k && !wr; j ++)
		{
			if (vout[j] > v[i])
			{
				wr = true;
				vout.insert(vout.begin() + j, v[i]);
			}
			else if (j == k - 1)
			{
				vout.push_back(v[i]);
				wr = true;
			}
		}
	}
	return (vout);
}

std::vector<int>	combineVector(std::vector<int> v1, std::vector<int> v2)
{
	for (int i = 0; i < v2.size(); i++)
		v1.push_back(v2[i]);
	return v1;
}

void	vector_solve(std::vector<int> vinit, int isize)
{
	std::vector<std::vector<int> >	varray;
	size_t							i;
	size_t							j;

	j = 0;
	i = 0;
	while (j < isize)
	{
		std::vector<int> chunk;
		chunk.push_back(vinit[j ++]);
		if (j < isize)
			chunk.push_back(vinit[j ++]);
		varray.push_back(chunk);
	}
	while (varray.size() >= 2)
	{
		for (int k = 0; k < varray.size(); k ++)
			varray[k] = solveVector(varray[k]);
		for (size_t k = 0; k + 1 < varray.size(); k ++)
		{
			varray[k] = combineVector(varray[k], varray[k + 1]);
			varray.erase(varray.begin() + k + 1);
		}
	}
	varray[0] = solveVector(varray[0]);
	// printVector(varray[0]);
}