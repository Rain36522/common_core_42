/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:11:06 by pudry             #+#    #+#             */
/*   Updated: 2024/01/16 15:11:06 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrate	paul("paul", 149);

	std::cout << paul;
	try
	{
		Bureaucrate rip("rip", 151);
	}
	catch (Bureaucrate::GradeTooHighException &msg)
	{
		std::cout <<"Grade errror : " << msg.what() << std::endl;
	}
	try
	{
		Bureaucrate rip("rip", 0);
	}
	catch (Bureaucrate::GradeTooLowException &msg)
	{
		std::cout <<"Grade errror : " << msg.what() << std::endl;
	}
	std::cout << "Actual grad of " << paul.getName() << " " << paul.getGrade() << std::endl;
	++ paul;
	std::cout << "Actual grad of " << paul.getName() << " " << paul.getGrade() << std::endl;
	try
	{
		++ paul;
	}
	catch (Bureaucrate::GradeTooHighException &msg)
	{
		std::cout <<"Grade errror : " << msg.what() << std::endl;
	}
	std::cout << "Actual grad of " << paul.getName() << " " << paul.getGrade() << std::endl;
		return (0);
}