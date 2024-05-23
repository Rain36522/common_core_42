/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:03:52 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 13:32:46 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints == 0)
	{
		std::cout << _name << " Can\'t attack. Energy to low\n";
		return ;
	}
	std::cout << this->_name << " attacked " << target << " for " << this->_AttakDamage;
	std::cout << " point of damage\n";
	this->_EnergyPoints --;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HiltPoints == 0)
		return ;
	if (this->_HiltPoints <= amount && this->_HiltPoints)
	{
		std::cout << this->_name << " is dead\n";
		this->_HiltPoints = 0;
		return ;
	}
	std::cout << this->_name << " take " << amount << " point of damage\n";
	this->_HiltPoints -= amount;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HiltPoints == 0)
		return ;
	if (this->_EnergyPoints == 0)
	{
		std::cout << this->_name << " Can be repaired. Energy to low\n";
		return ;
	}
	this->_HiltPoints += amount;
	std::cout << this->_name << " Win " << amount << " point of healt for 1 energy point.";
	std::cout << " They have now " << this->_HiltPoints << " healt points\n";
	this->_EnergyPoints --;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HiltPoints(10), _EnergyPoints(10), _AttakDamage(10)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	*this = src;
	return (*this);
}