/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:24:16 by pudry             #+#    #+#             */
/*   Updated: 2024/01/06 18:00:11 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void	ft_add(Contact *ctc, PhoneBook *pb)
{
	char	**array;

	array = ctc->put_contact_in_array();
	pb->set_contact(array);
}

void	ft_search(Contact *ctc, PhoneBook *pb)
{
	char	**array;
	char	*str;

	str = NULL;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "| N | First name | last  name |  nickname  |" << std::endl;
	for (int i = 0; i < 8; i ++)
	{
		array = pb->give_contact(i);
		ctc->set_contact(array);
		ctc->print_contact(i);
	}
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::endl << "Select the contact index :";
	while ((!str && !*str) || ((str[0] < '0' || str[0] > '8') && !str[1]))
	{
		if (str)
			std::cout << "Invalid input, try again : ";
		std::cin >> str;
		std::cout << std::endl;
	}
	array = pb->give_contact((int)(str[0] - '0'));
	ctc->set_contact(array);
	ctc->print_full_contact();
}

static std::string	get_word(void)
{
	std::string str;

	std::cout << "Input :";
	std::cin >> str;
	std::cout << std::endl;
	while (str != "ADD" && str != "SEARCH" && str != "EXIT")
	{
		std::cout << "Invalid input, try again : ";
		std::cin >> str;
		std::cout << std::endl;
	}
	return (str);
}

int	main(void)
{
	std::string	str;
	Contact		ctc;
	PhoneBook	pb;

	str = get_word();
	while (str != "EXIT")
	{
		if (str == "ADD")
			ft_add(&ctc, &pb);
		else if (str == "SEARCH")
			ft_search(&ctc, &pb);
		str = get_word();
	}
	
}