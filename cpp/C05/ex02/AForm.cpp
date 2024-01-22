/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:03:52 by pudry             #+#    #+#             */
/*   Updated: 2024/01/17 15:03:56 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

void	AForm::signForm(const Bureaucrate &src)
{
	if (src.getGrade() > this->_gradeSigne)
		throw(AForm::GradeTooLowException());
	else if (src.getGrade() <= this->_gradeSigne)
	{
		this->_signed = 1;
		std::cout << "Formulaire is signed\n";
	}
	else
		std::cout << "Grade to low for sign\n";
}

bool	AForm::getSign(void) const
{
	return (this->_signed);
}

AForm	&AForm::operator=(const AForm &src)
{
	*this = src;
	return (*this);
}

AForm::AForm(const AForm &src) : _name(src._name), _signed(false), _gradeSigne(src._gradeSigne), _gradeExe(src._gradeExe) {}

AForm::~AForm(void) {}

AForm::AForm(std::string name, int sign, int exe) : _name(name), _gradeSigne(sign), _gradeExe(exe)
{
	this->_signed = 0;
}
