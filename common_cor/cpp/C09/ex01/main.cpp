/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:47:35 by pudry             #+#    #+#             */
/*   Updated: 2024/02/13 10:39:56 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 2)
	{
		std::cerr << "Invalide Input\n";
		return 1;
	}
	RPN	a(argv[1]);
	return 0;
}