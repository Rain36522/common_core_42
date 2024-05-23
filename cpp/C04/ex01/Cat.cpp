/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:49:54 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 18:06:48 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Miaooowww\n";
}

Cat	&Cat::operator=(Cat const &src)
{
	*this = src;
	return (*this);
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called\n";
}

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat constructor called\n";
	this->_brain = new Brain();
}