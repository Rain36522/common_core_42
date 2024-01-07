/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:19:27 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 13:28:11 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name)
{
	Zombie*	Z;

	Z = new Zombie(name);
	return (Z);
}

void	randomChump(std::string name)
{
	Zombie	Z(name);

	Z.announce();
}

int	main(void)
{
	Zombie*	Z;

	Z = newZombie("DEAD");
	Z->announce();
	delete(Z);
	randomChump("LIFE");
}