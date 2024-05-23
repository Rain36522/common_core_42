/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:18:01 by pudry             #+#    #+#             */
/*   Updated: 2024/02/12 11:16:38 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	Span sp2 = Span(1000);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Span, number : 6, 3, 17, 9, 11\n";
	// sp.addNumber(12);
	std::cout << "Shortest size : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest size : " << sp.longestSpan() << std::endl;
	
	std::cout << "Generate span between 0 to 999\n";
	sp2.rangeIterator(0, 999);
	std::cout << "Longest size : " << sp2.longestSpan() << std::endl;
	return 0;
}