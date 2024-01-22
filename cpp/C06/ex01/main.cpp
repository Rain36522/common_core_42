/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:26:44 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 09:28:56 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

int	main(void)
{
	Data		*ptr;
	Data		*ptr_cpy;
	Serializer	rs;
	uintptr_t	ui;

	ptr = new Data;
	ptr->i = 10;
	std::cout << "Initialized to value 10\n";
	ui = rs.serialize(ptr);
	ptr_cpy = rs.deserialize(ui);

	std::cout << "original ptr : " << ptr->i << std::endl;
	std::cout << "Copy ptr     : " << ptr_cpy->i << std::endl;

	delete ptr;
}