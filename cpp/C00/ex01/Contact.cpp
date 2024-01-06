/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:08:29 by pudry             #+#    #+#             */
/*   Updated: 2024/01/06 17:54:31 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

static char*	get_data(void)
{
	char	*str;

	str = NULL;
	while (!str && !*str)
	{
		if (str)
			std::cout << "Invalid input, try again" << std::endl;
		std::cin >> str;
	}
	return (str);


}

void	Contact::set_contact(char **array)
{
	array[0] = this->_fName;
	array[1] = this->_lName;
	array[2] = this->_nickname;
	array[3] = this->_phone;
	array[4] = this->_pwd;
	array[5] = NULL;
	delete(array);
}

void	Contact::get_new_contact(void)
{
	std::cout << "Veuillez saisir les informatiosn :" << std::endl;
	std::cout << "First name :" << std::endl;
	this->_fName = get_data();
	std::cout << "Last name:" << std::endl;
	this->_lName = get_data();
	std::cout << "Nickname :" << std::endl;
	this->_nickname = get_data();
	std::cout << "Phone number :" << std::endl;
	this->_phone = get_data();
	std::cout << "Secret phrase :" << std::endl;
	this->_pwd = get_data();
	
}

void	Contact::print_full_contact(void) const
{
	std::cout << "There\'s the choosen contact :" << std::endl;
	std::cout << "Firstname     :" << this->_fName << std::endl;
	std::cout << "Last name     :" << this->_lName << std::endl;
	std::cout << "nickname      :" << this->_nickname << std::endl;
	std::cout << "Phone number  :" << this->_phone << std::endl;
	std::cout << "Secret phrase :" << this->_pwd << std::endl;
}

void	Contact::print_contact(int i) const
{
	if (!*this->_fName)
		return;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "| " << i << " | ";
	std::cout.write(this->_fName, 10);
	std::cout << " | ";
	std::cout.write(this->_lName, 10);
	std::cout << " | ";
	std::cout.write(this->_nickname, 10);
	std::cout << " |" << std::endl;
}

char**	Contact::put_contact_in_array(void)
{
	char	**array;

	array = new char*[5];
	array[0] = this->_fName;
	array[1] = this->_lName;
	array[2] = this->_nickname;
	array[3] = this->_phone;
	array[4] = this->_pwd;
	return (array);
}

Contact::Contact(void)
{
	std::cout << "Contructor Contact called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact called" << std::endl;
}