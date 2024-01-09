/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:42:56 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 10:25:29 by pudry            ###   ########.fr       */
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
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, \
					&Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i ++)
	{
		if (cases[i] == level)
		{
			(this->*f[i])();
			return ;
		}
	}
	std::cout << "Invalid input\n";
}

Harl::Harl(void){};
Harl::~Harl(void){};