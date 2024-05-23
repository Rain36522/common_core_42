/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:36:17 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 14:14:38 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::attack(std::string target)
{
	if (this->_EnergyPoints == 0)
	{
		std::cout << this->_name << " Can\'t attack. Energy to low\n";
		return ;
	}
	std::cout << "Antiti FragTrap ";
	std::cout << this->_name << " attacked " << target << " for " << this->_AttakDamage;
	std::cout << " point of damage\n";
	this->_EnergyPoints --;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five guys accepted\n";
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	*this = src;
	return (*this);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_AttakDamage = 30;
	this->_EnergyPoints = 100;
	this->_HiltPoints = 100;
	std::cout << "Default FragTrap constructor called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default FragTrap destructor called\n";
}