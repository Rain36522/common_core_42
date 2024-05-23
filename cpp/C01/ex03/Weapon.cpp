/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:33:13 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:33:13 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void) const
{
	return(this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}

Weapon::Weapon(std::string str) : type(str)
{
	std::cout << "Default weapon constructor called\n";
}

Weapon::~Weapon(void)
{
	std::cout << "Default weapon destructor called\n";
}