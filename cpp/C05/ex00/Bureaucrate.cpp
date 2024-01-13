/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:47:48 by pudry             #+#    #+#             */
/*   Updated: 2024/01/13 18:23:53 by pudry            ###   ########.fr       */
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
		std::cout << this->_name << "GradeTooHighException\n";
		return (*this);
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
		std::cout << this->_name << " Grade Too High Exception\n";
		return (*this);
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
		std::cout << this->_name << "Grade to high\n";
		throw(this->_name);
	}
	else if (igrade < 1)
	{
		std::cout << this->_name << "Grade to low\n";
		throw(this->_name);
	}
	else
		this->_grade = igrade;
}