/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:43:03 by pudry             #+#    #+#             */
/*   Updated: 2024/01/18 09:43:03 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

void	PresidentialPardonForm::execute(const Bureaucrate src)
{
	if (src.getGrade() > this->_gradeExe)
		throw (PresidentialPardonForm::GradeTooLowException());
	else if (!this->getSign())
		throw(PresidentialPardonForm::FormNotSign());
	std::cout << src.getName() << " as execute form : " << this->_name << std::endl;
	std::cout << src.getName() << " as been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	*this = src;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) {}


PresidentialPardonForm::~PresidentialPardonForm(void) {};

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5) {}