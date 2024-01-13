/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:56:45 by pudry             #+#    #+#             */
/*   Updated: 2024/01/13 18:25:21 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrate	paul("paul", 149);

	try
	{
		Bureaucrate rip("rip", 151);
	}
	catch (void)
	{
		std::cout <<"Rip is not create\n";
	}
	std::cout << "Actual grad of " << paul.getName() << " " << paul.getGrade() << std::endl;
	++ paul;
	std::cout << "Actual grad of " << paul.getName() << " " << paul.getGrade() << std::endl;
	++ paul;
	std::cout << "Actual grad of " << paul.getName() << " " << paul.getGrade() << std::endl;
		return (0);
}