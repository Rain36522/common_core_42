/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:49:54 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 18:07:03 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "ouaf ouaf\n";
}

Dog	&Dog::operator=(Dog const &src)
{
	*this = src;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called\n";
}

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog constructor called\n";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	*this = src;
}