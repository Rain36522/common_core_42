/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:37:02 by pudry             #+#    #+#             */
/*   Updated: 2024/01/18 10:37:45 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	AForm* j;
	AForm* i;
	AForm* k;
	AForm* l;
	Bureaucrate	a("50", 50);
	Bureaucrate	b("140", 140);
	Bureaucrate	c("149", 149);
	Bureaucrate	d("10", 10);
	Bureaucrate	e("1", 1);
	Intern		z;

	i = z.makeForm("robotomy request", "Bender");
	j = z.makeForm("shruberry request", "29B");
	k = z.makeForm("presidential request", "el passo");
	l = z.makeForm("not existing request", "rip");

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