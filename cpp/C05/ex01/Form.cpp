/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:12:12 by pudry             #+#    #+#             */
/*   Updated: 2024/01/16 15:12:12 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void	Form::signForm(const Bureaucrate &src)
{
	if (src.getGrade() > this->_gradeSigne)
		throw(Form::GradeTooLowException());
	else if (src.getGrade() <= this->_gradeSigne)
	{
		this->_signed = 1;
		std::cout << "Formulaire is signed\n";
	}
	else
		std::cout << "Grade to low for sign\n";
}

Form	&Form::operator=(const Form &src)
{
	*this = src;
	return (*this);
}

Form::Form(const Form &src) : _name(src._name), _signed(false), _gradeSigne(src._gradeSigne), _gradeExe(src._gradeExe) {}

Form::~Form(void) {}

Form::Form(std::string name, int sign, int exe) : _name(name), _gradeSigne(sign), _gradeExe(exe)
{
	this->_signed = 0;
}
