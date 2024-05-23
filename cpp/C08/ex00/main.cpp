/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:33:31 by pudry             #+#    #+#             */
/*   Updated: 2024/02/12 11:11:16 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <array>

int	main(void)
{
	std::array<int, 5> arr = {10, 11, 12, 14, 15};

	std::cout << "Container : ";
	for (int i = 0; i < 5; i ++)
	{
		std::cout << arr[i];
		if (i + 1 < 5)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	
	if (::ft_easyfind(arr, 10))
		std::cout << "element : " << 10 << " is in array\n";
	else
		std::cout << "element not found\n";
	if (::ft_easyfind(arr, 13))
		std::cout << "element : " << 10 << "is in array\n";
	else
		std::cout << "element : " << 13 << " not found\n";
}