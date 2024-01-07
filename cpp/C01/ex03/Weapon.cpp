/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:39:57 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 15:47:26 by pudry            ###   ########.fr       */
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

Weapon::Weapon(void)
{
	std::cout << "Default weapon constructor called\n";
}

Weapon::~Weapon(void)
{
	std::cout << "Default weapon destructor called\n";
}