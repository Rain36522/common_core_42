/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:25:47 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 10:27:39 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
#include <iostream>


int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "You have to give only one argument.\n";
		return (0);
	}

	harl.complain(argv[1]);
	return (0);
}