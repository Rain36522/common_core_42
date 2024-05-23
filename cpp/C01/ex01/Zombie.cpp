/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:13:42 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 14:51:55 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->str << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string str)
{
	this->str = str;
}

Zombie::Zombie(void)
{
	std::cout << "Constructor Zombie " << this->str << " called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor Zombie " << this->str << " called" << std::endl;
}