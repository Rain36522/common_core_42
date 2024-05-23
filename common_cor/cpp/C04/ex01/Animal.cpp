/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:37:52 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 16:25:54 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound\n";
}

Animal	&Animal::operator=(Animal const &src)
{
	*this = src;
	return (*this);
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal::Animal(void)
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}