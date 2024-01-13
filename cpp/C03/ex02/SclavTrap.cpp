/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SclavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:36:17 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 14:06:20 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SclavTrap.hpp"

void	SclavTrap::attack(std::string target)
{
	if (this->_EnergyPoints == 0)
	{
		std::cout << _name << " Can\'t attack. Energy to low\n";
		return ;
	}
	std::cout << "Antiti SclavTrap ";
	std::cout << this->_name << " attacked " << target << " for " << this->_AttakDamage;
	std::cout << " point of damage\n";
	this->_EnergyPoints --;
}

void	SclavTrap::guardGate(void)
{
	std::cout << "Guard gate mode for " << this->_name << " actived\n";
}

SclavTrap	&SclavTrap::operator=(SclavTrap const &src)
{
	*this = src;
	return (*this);
}

SclavTrap::SclavTrap(std::string name): ClapTrap(name)
{
	this->_AttakDamage = 20;
	this->_EnergyPoints = 50;
	this->_HiltPoints = 100;
	std::cout << "Default Sclavtrap constructor called\n";
}

SclavTrap::~SclavTrap(void)
{
	std::cout << "Default Sclavtrap destructor called\n";
}