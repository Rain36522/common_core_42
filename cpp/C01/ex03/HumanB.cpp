/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:24:36 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:24:43 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void) const
{
	if (this->weapons != NULL)
		std::cout << this->name << " attacks wiyh their " << this->weapons->getType() << std::endl;
	else
		std::cout << this->name << " Don\'t attack\n"; 
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapons = &weapon;
}

HumanB::HumanB(std::string str) : name(str)
{
	std::cout << "Constructor human B called\n";
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor human B called\n";
}