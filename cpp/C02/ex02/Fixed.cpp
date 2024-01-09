/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:50:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 17:51:58 by pudry            ###   ########.fr       */
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

bool	Fixed::operator!=(Fixed const &src)
{
	return(src.toFloat() != this->toFloat());
}

bool	Fixed::operator==(Fixed const &src)
{
	return(src.toFloat() == this->toFloat());
}

bool	Fixed::operator>=(Fixed const &src)
{
	return(src.toFloat() >= this->toFloat());
}

bool	Fixed::operator<=(Fixed const &src)
{
	return(src.toFloat() <= this->toFloat());
}

bool	Fixed::operator<(Fixed const &src)
{
	return(src.toFloat() < this->toFloat());
}

bool	Fixed::operator>(Fixed const &src)
{
	return(src.toFloat() > this->toFloat());
}

Fixed	Fixed::operator+(Fixed const &src)
{
	Fixed	result;

	result.setRawBits(src.getRawBits() + this->getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &src)
{
	Fixed	result;

	result.setRawBits(src.getRawBits() - this->getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &src)
{
	Fixed	result;

	result.setRawBits(src.getRawBits() * this->getRawBits());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &src)
{
	Fixed	result;

	result.setRawBits(src.getRawBits() / this->getRawBits());
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	&Fixed::operator++(int i)
{
	Fixed tmp(*this);

	tmp.setRawBits(tmp.getRawBits() + 1);
	*this = tmp;
	return (*this);
}

Fixed	&Fixed::operator--(int i)
{
	Fixed tmp(*this);

	tmp.setRawBits(tmp.getRawBits() - 1);
	*this = tmp;
	return (*this);
}

Fixed	min(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed	min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed	max(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed	max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}
