/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 10:34:12 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 12:58:53 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "PhoneBook.hpp"

static std::string	ft_read()
{
	std::string	str;

	std::getline(std::cin, str);
	if (std::cin.fail() || std::cin.eof())
		exit(0);
	else if (str.empty())
		return("");
	else
		return (str);
}


static std::string	get_cmd(void)
{
	std::string str;

	std::cout << "Type an input (ADD, SEARCH, EXIT) : ";
	str = ft_read();
	while (str != "ADD" && str != "SEARCH" && str != "EXIT")
	{
		std::cout << "Wrong input , try again : ";
		str = ft_read();
	}
	return (str);
}

static int	get_index(int	imax)
{
	std::string	str;
	int			i;

	std::cout << "Select the index of the contact between 1 and " << imax << " : ";
	str = ft_read();
	while (str == "" && str.length() != 1 && str[0] <= '0' && str[0] >= imax + '0')
	{
		std::cout << "Invalid input, try again : ";
		str = ft_read();
	}
	return ((int)(str[0] - '0'));
}

int	main(void)
{
	PhoneBook	pb;
	std::string	str;

	while (str != "EXIT")
	{
		str = get_cmd();
		if (str == "ADD")
			pb.get_new_contact();
		else if (str == "SEARCH")
		{
			pb.put_contact_list();
			if (pb.init_ctc != 0)
				pb.put_one_contact(get_index(pb.init_ctc));
			else
				std::cout << "The phone book is empty" << std::endl;
		}
	}
}