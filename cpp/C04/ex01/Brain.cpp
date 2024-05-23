/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:57:14 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 17:09:45 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain	&Brain::operator=(Brain const &src)
{
	*this = src;
	return (*this);
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

Brain::Brain(void)
{
	std::cout << "Brain constructor called\n";
}