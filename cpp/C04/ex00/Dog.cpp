/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:49:54 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 16:29:57 by pudry            ###   ########.fr       */
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
	std::cout << "Dog destructor called\n";
}

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &src)
{
	*this = src;
}