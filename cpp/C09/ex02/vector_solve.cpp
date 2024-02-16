/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_solve.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:19 by pudry             #+#    #+#             */
/*   Updated: 2024/02/16 13:19:53 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#define DEBUG std::cout << "\033[31m" << __FILE__ << __LINE__ << "\033[0m" << std::endl;


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
	bool				write;

	vout.push_back(v[0]);
	for (int i = 1; i < v.size(); i ++)
	{
		
		write = false;
		for (size_t j = 0; j < vout.size(); j ++)
		{
			if (vout[j] > v[i])
			{
				write = true;
				vout.insert(vout.begin() + j, v[i]);
				break;
			}
			if (!write)
				vout.push_back(v[i]);
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
	printVector(vinit);
	while (j < isize)
	{
		std::vector<int> chunk(vinit[j ++]);
		if (j < isize)
			chunk.push_back(vinit[j ++]);
		varray.push_back(chunk);
	}
	DEBUG
	while (varray.size() >= 2)
	{
		DEBUG
		for (int k = 0; k < varray.size(); k ++)
			varray[k] = solveVector(varray[k]);
		DEBUG
		for (size_t k = 0; k + 1 < varray.size(); k ++)
		{
			DEBUG
			varray[k] = combineVector(varray[k], varray[k + 1]);
			varray.erase(varray.begin() + k + 1);
		}
		DEBUG
	}
	printVector(varray[0]);
}