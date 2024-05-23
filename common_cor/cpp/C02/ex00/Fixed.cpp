/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:50:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 14:46:54 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called\n";
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	this->_rawBits = src.getRawBits();
	std::cout << "Copy assignement operator called" << std::endl;
	return (*this);
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
