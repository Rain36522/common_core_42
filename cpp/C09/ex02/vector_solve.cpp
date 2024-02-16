/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_solve.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:19 by pudry             #+#    #+#             */
/*   Updated: 2024/02/16 16:39:39 by pudry            ###   ########.fr       */
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
	size_t				k;

	vout.push_back(v[0]);
	for (int i = 1; i < v.size(); i ++)
	{
		DEBUG
		printVector(vout);
		write = false;
		k = vout.size();
		for (size_t j = 0; j < k; j ++)
		{
			if (vout[j] > v[i])
			{
				write = true;
				vout.insert(vout.begin() + j, v[i]);
				std::cout << "Insert : " << j << ", value : " << v[i] << std::endl;
				break;
			}
			if (!write)
			{
				vout.push_back(v[i]);
				std::cout << "value : " << v[i] << std::endl;
			}
			// std::cout << "J : " << j << std::endl;
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
		std::vector<int> chunk;
		chunk.push_back(vinit[j ++]);
		if (j < isize)
			chunk.push_back(vinit[j ++]);
		varray.push_back(chunk);
	}
	std::cout << "Array of vector :" << std::endl;
	printVector(varray[0]);
	printVector(varray[1]);
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
	std::cout << "1 :";
	printVector(varray[0]);
	varray[0] = solveVector(varray[0]);
	std::cout << "2 :";
	printVector(varray[0]);
}