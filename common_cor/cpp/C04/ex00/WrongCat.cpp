/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:49:54 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 16:48:09 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat song\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	*this = src;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}