/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:43:08 by pudry             #+#    #+#             */
/*   Updated: 2023/12/29 15:01:14 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i ++)
	{
		for (int j = 0; j < strlen(argv[i]); j ++)
		{
			std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}