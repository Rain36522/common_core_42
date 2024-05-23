/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:38:48 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 11:49:46 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//set the private element
void	Contact::set_fname(std::string str)
{
	this->_fName = str;
}

void	Contact::set_lname(std::string str)
{
	this->_lName = str;
}

void	Contact::set_nick(std::string str)
{
	this->_Nickname = str;
}

void	Contact::set_phone(std::string str)
{
	this->_Phone = str;
}

void	Contact::set_pwd(std::string str)
{
	this->_Pwd = str;
}

//get the private element
std::string	Contact::get_fname(void) const
{
	return (this->_fName);
}

std::string	Contact::get_lname(void) const
{
	return (this->_lName);
}

std::string	Contact::get_nick(void) const
{
	return (this->_Nickname);
}

std::string	Contact::get_phone(void) const
{
	return (this->_Phone);
}

std::string	Contact::get_pwd(void) const
{
	return (this->_Pwd);
}



Contact::Contact(void)	{}

Contact::~Contact(void)	{}