/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:16:47 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 15:33:36 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strPtr;
	std::string&	stringRef = str;

	strPtr = &str;
	std::cout << "Original : " << str << std::endl;
	std::cout << "Ptr : " << *strPtr << std::endl;
	std::cout << "Ref : " << stringRef << std::endl;
	return (0);
}