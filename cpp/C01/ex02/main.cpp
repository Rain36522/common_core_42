/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:27:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:27:08 by pudry            ###   ########.ch       */
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