/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:37:59 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 14:18:15 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "SclavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap	bob("bob");
	SclavTrap	tom("Tom");
	FragTrap	luc("luc");

	tom.attack("bob");
	tom.takeDamage(10);
	tom.beRepaired(10);
	tom.guardGate();

	std::cout << "<=======================================================>\n";

	bob.attack("bob");
	bob.beRepaired(10);
	bob.takeDamage(9);

	std::cout << "<=======================================================>\n";

	luc.attack("tom");
	luc.beRepaired(10);
	luc.takeDamage(10);
	luc.highFivesGuys();
}