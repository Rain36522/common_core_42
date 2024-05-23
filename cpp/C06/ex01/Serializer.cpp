/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:20:14 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 09:20:14 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


# include "Serializer.hpp"

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serializer	&Serializer::operator=(const Serializer &src)
{
	*this = src;
	return (*this);
}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer::~Serializer(void) {}

Serializer::Serializer(void) {}