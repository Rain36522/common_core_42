/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:38:16 by pudry             #+#    #+#             */
/*   Updated: 2024/01/18 10:38:34 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm	*Intern::makeForm(std::string type, std::string target) const
{
	if (type != "presidential request" && type != "robotomy request" && type != "shruberry request")
	{
		std::cout << "Invalid input for formular creation : " << type << std::endl;
		return (NULL);
	}
	std::cout << type << " as been accepted\n";
	switch (type[0])
	{
		case 112:
			return (new PresidentialPardonForm(target));
		case 114:
			return (new RobotomyRequestForm(target));
		default:
			return (new ShrubberyCreationForm(target));
	}
}

Intern	&Intern::operator=(const Intern &src)
{
	*this = src;
	return (*this);
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern(void) {}

Intern::Intern(void) {}