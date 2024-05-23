/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:44:27 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 12:58:50 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string	ft_read()
{
	std::string	str;

	std::getline(std::cin, str);
	if (std::cin.fail() || std::cin.eof())
		exit(0);
	else if (str.empty())
		return("");
	else
		return (str);
}

static std::string	get_data(void)
{
	std::string	str;

	str =ft_read();
	while (str == "")
	{
		std::cout << "Invalid input, try again" << std::endl;
		str =ft_read();
	}
	return (str);
}

void	PhoneBook::get_new_contact(void)
{
	this->i ++;
	if (this->i == 9)
		this->i = 1;
	std::cout << "Veuillez saisir les informatiosn :" << std::endl;
	std::cout << "First name :";
	this->ctc[i - 1].set_fname(get_data());
	std::cout << std::endl;
	std::cout << "Last name:";
	this->ctc[i - 1].set_lname(get_data());
	std::cout << std::endl;
	std::cout << "Nickname :";
	this->ctc[i - 1].set_nick(get_data());
	std::cout << std::endl;
	std::cout << "Phone number :";
	this->ctc[i - 1].set_phone(get_data());
	std::cout << std::endl;
	std::cout << "Secret phrase :";
	this->ctc[i - 1].set_pwd(get_data());
	std::cout << std::endl;
}

static void	put_str(std::string str)
{
	int	i;

	i = str.length();
	if (i >= 9)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::cout << str;
		for (int j = 0; j + i < 10; j ++)
			std::cout << " ";
	}
}

void	PhoneBook::put_contact_list(void)
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "| N | First name | last  name |  nickname  |" << std::endl;
	this->init_ctc = 0;
	for (int i = 0; i < 8; i ++)
	{
		if (this->ctc[i].get_fname() == "")
			break ;
		this->init_ctc = i + 1;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "| " << i + 1 << " | ";
		put_str(this->ctc[i].get_fname());
		std::cout << " | ";
		put_str(this->ctc[i].get_lname());
		std::cout << " | ";
		put_str(this->ctc[i].get_nick());
		std::cout << " |" << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
}

void	PhoneBook::put_one_contact(int ictc) const
{
	std::cout << "Put contact in index " << ictc << " :" << std::endl;
	ictc --;
	std::cout << "First name   : " << this->ctc[ictc].get_fname() << std::endl;
	std::cout << "Last name    : " << this->ctc[ictc].get_lname() << std::endl;
	std::cout << "Nickname     : " << this->ctc[ictc].get_nick() << std::endl;
	std::cout << "Phone number : " << this->ctc[ictc].get_phone() << std::endl;
	std::cout << "Password     : " << this->ctc[ictc].get_pwd() << std::endl;
}


PhoneBook::PhoneBook(void) : init_ctc(0), i(0)	{}

PhoneBook::~PhoneBook(void)	{}