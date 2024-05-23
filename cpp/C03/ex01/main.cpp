/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:37:59 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 13:55:15 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "SclavTrap.hpp"

int main( void )
{
	ClapTrap	bob("bob");
	SclavTrap	tom("Tom");

	tom.attack("bob");
	tom.takeDamage(10);
	tom.beRepaired(10);
	tom.guardGate();

	bob.attack("bob");
	bob.beRepaired(10);
	bob.takeDamage(9);
}