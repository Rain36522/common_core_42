/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:27:57 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:27:57 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks wiyh their " << this->Weapon.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon gun) : name(str) Weapon(&gun)
{
	std::cout << "Constructor human A called\n";
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor human A called\n";
}