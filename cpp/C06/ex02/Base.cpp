/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:43:14 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 10:43:54 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

std::string	Base::getType(void)
{
	return ("Base");
}

Base	*Base::generate(void)
{
	int	i;

	std::srand(std::time(nullptr));
	i = std::rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	Base::identify(Base *p)
{
	std::cout << "Class type is : " << p->getType() << std::endl;
}

void	Base::identify(Base &p)
{
	std::cout << "Class type is : " << p.getType() << std::endl;
}

Base::~Base(void) {};

Base::Base(void) {};