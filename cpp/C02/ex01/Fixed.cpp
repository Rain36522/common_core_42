/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:50:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 16:17:53 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << this->_iliteral));
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_iliteral);
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	this->_rawBits = src.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int in)
{
	this->_rawBits = in << this->_iliteral;
	std::cout << "Constructor Fixed called\n";
}

Fixed::Fixed(const float fn)
{
	this->_rawBits = roundf(fn * (1 << this->_iliteral));
	std::cout << "Constructor Fixed called\n";
}

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Constructor Fixed called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor Fixed called\n";
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}