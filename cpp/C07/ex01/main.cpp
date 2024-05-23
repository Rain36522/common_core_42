/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:38:11 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 14:40:42 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void iter_print(T val)
{
	std::cout << val << std::endl;
}

int main()
{
	int temp[5] = {5, 1, 2, 3, 4};
	iter(temp, 5, iter_print);
	std::cout << std::endl;
	std::string why[6] = {"hello", "gutentag", "holla", "bonjour", "1", "2"};
	iter(why, 6, iter_print);
	return (0);
}