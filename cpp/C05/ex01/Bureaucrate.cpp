/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:39:01 by pudry             #+#    #+#             */
/*   Updated: 2024/01/16 13:39:01 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrate::getName(void) const
{
	return (this->_name);
}

int Bureaucrate::getGrade(void) const
{
	return (this->_grade);
}

Bureaucrate	Bureaucrate::operator++(void)
{
	if (this->_grade == 150)
	{
		throw(Bureaucrate::GradeTooHighException());
	}
	else
	{
		this->_grade ++;
		return (*this);
	}
}

Bureaucrate	Bureaucrate::operator--(void)
{
	if (this->_grade == 1)
	{
		throw(Bureaucrate::GradeTooLowException());
	}
	else
	{
		this->_grade --;
		return (*this);
	}
}

Bureaucrate	&Bureaucrate::operator=(const Bureaucrate &src)
{
	this->_grade = src._grade;
	this->_name = src._name;
	return (*this);
}

Bureaucrate::Bureaucrate(const Bureaucrate &src)
{
	*this = src;
}

Bureaucrate::~Bureaucrate(void) {}

Bureaucrate::Bureaucrate(std::string sname, int igrade) : _name(sname)
{
	if (igrade > 150)
	{
		throw(Bureaucrate::GradeTooHighException());
	}
	else if (igrade < 1)
	{
		throw(Bureaucrate::GradeTooLowException());
	}
	else
		this->_grade = igrade;
}