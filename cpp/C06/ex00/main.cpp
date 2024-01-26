/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:29:22 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 08:29:22 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main()
{
	ScalarConverter	a;

	a.setStr("870000000000000000000000000000000000000");
	a.convert();
	std::cout << "<============================================================>\n";
	a.setStr("245");
	a.convert();
	std::cout << "<============================================================>\n";
	a.setStr("97.1f");
	a.convert();
	std::cout << "<============================================================>\n";
	a.setStr("-42.1f");
	a.convert();
}