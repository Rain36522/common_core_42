/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:15:06 by pudry             #+#    #+#             */
/*   Updated: 2024/01/16 15:16:14 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrate	paul("paul", 10);
	Form		formulaire("constr", 10, 11);

	formulaire.signForm(paul);
	++ paul;
	++ paul;
	try
	{
		formulaire.signForm(paul);
	}
	catch(Form::GradeTooLowException &msg)
	{
		std::cout <<"Grade errror : " << msg.what() << ", Bureaucrate name : " << paul.getName() << std::endl;
	}
	return (0);
}