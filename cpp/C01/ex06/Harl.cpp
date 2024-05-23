/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:42:56 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 10:40:31 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::warning(void)
{
	 std::cout << "I think I deserve to have some extra bacon for free.";
	 std::cout << " I’ve been coming for years whereas you started working";
	 std::cout << " here since last month." << std::endl;
	 this->error();
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
	this->warning();
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!" << std::endl;
	this->info();
}

void	Harl::complain(std::string level)
{
	if (level != "ERROR" && level != "DEBUG" && level != "INFO" && level != "WARNING")
	{
		std::cout << "Invalid input, input must be:\n";
		std::cout << "\t./Harl DEBUG\n";
		std::cout << "\t./Harl INFO\n";
		std::cout << "\t./Harl WARNING\n";
		std::cout << "\t./Harl ERROR\n";
		return ;
	}
	switch ((int)level[0])
	{
		case 68:
			this->debug();
			break;
		case 69:
			this->error();
			break;
		case 73:
			this->info();
			break;
		default:
			this->warning();
	}
}

Harl::Harl(void){};
Harl::~Harl(void){};