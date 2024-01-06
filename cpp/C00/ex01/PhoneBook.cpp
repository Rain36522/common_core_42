/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:44:28 by pudry             #+#    #+#             */
/*   Updated: 2024/01/06 17:52:59 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "PhoneBook.hpp"

char**	PhoneBook::give_contact(int iline) const
{
	char	**array;
	
	array = new char* [5];
	array[0] = this->_fName[iline];
	array[1] = this->_lName[iline];
	array[2] = this->_nickname[iline];
	array[3] = this->_phone[iline];
	array[4] = this->_pwd[iline];
	return (array);
}

void	PhoneBook::set_contact(char **array)
{
	this->last_line ++;
	if (this->last_line > 8)
		this->last_line = 1;
	this->_fName[this->last_line - 1] = array[0];
	this->_lName[this->last_line - 1] = array[1];
	this->_nickname[this->last_line - 1] = array[2];
	this->_phone[this->last_line - 1] = array[3];
	this->_phone[this->last_line - 1] = array[4];
	delete array;
}

int	PhoneBook::is_contact(int i) const
{
	if (this->_fName[i])
		return 1;
	return 0;
}

PhoneBook::PhoneBook() : last_line(0)
{
	std::cout << "Constructor PhoneBook called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook called" << std::endl;
}