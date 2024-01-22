/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:39:10 by pudry             #+#    #+#             */
/*   Updated: 2024/01/17 16:42:01 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	ft_try(AForm *form, Bureaucrate bct)
{
	try
	{
		if (!form->getSign())
			form->signForm(bct);
		form->execute(bct);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main()
{
	AForm* j = new ShrubberyCreationForm("28C");
	AForm* i = new RobotomyRequestForm("drill");
	AForm* k = new PresidentialPardonForm("president");
	Bureaucrate	a("50", 50);
	Bureaucrate	b("140", 140);
	Bureaucrate	c("149", 149);
	Bureaucrate	d("10", 10);
	Bureaucrate	e("1", 1);

	// try Schrubbery
	ft_try(j, c);
	ft_try(j, b);
	ft_try(j, e);
	delete j;
	// try robotomi
	ft_try(i, c);
	ft_try(i, a);
	ft_try(i, e);
	delete i;
	// try presidential
	ft_try(k, c);
	ft_try(k, d);
	ft_try(k, e);
	delete k;
	

	return  0;
}