/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:19:27 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 15:14:37 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie*	zombieHord(int N, std::string name)
{
	Zombie *Z;

	Z = new Zombie[N];
	for (int i = 0; i < 10; i ++)
		Z[i].set_name(name);
	return (Z);
}

int	main(void)
{
	Zombie*	Z;
	int		N;

	N = 10;

	Z = zombieHord(N, "Foo");
	for (int i = 0; i < N; i ++)
		Z[i].announce();
	delete[] Z;
}