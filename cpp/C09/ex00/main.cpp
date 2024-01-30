/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:35:19 by pudry             #+#    #+#             */
/*   Updated: 2024/01/29 14:00:21 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Exchange.hpp"
#include <iostream>
#include <fstream>

bool	checkFormatDate(std::string date, Exchange data)
{
	if (date.size() != 10)
	{
		std::cout << "Invalide format => " << date << std::endl;
		return (false);
	}
	for (int i = 0; i < date.size(); i ++)
	{
		if (!isdigit(date[i]) && date[i] != '-')
		{
			std::cout << "Invalide format => " << date << std::endl;
			return (false);
		}
		if (date[i] == '-' && (i != 4 || i != 7))
		{
			std::cout << "Invalide format => " << date << std::endl;
			return (false);
		}
	}
	return (true);
}

bool	checkFormatChange(std::string date, double value, Exchange data)
{
	value = data.getChange(date) * value;
	if (value < 0 || value > 1000)
	{
		std::cout << "Value over range\n";
		return (false)
	}
}

bool	checkInput(std::string date, double value, Exchange data)
{
	if (!checkFormatDate(date, data) || !checkFormatChange(date, value, data))
		return (false);
		
}

void	makeExchange(Exchange data, std::string file)
{
	std::ifstream	infile;
	std::string		tmp;
	std::string		date;
	double			value;
	int				isepar;
	int				i;

	infile.open(file);
	if (infile.fail())
		throw std::ifstream::failure("Error opening data file");
	i = 1;
	while (getline(infile, tmp))
	{
		isepar = tmp.find(" | ");
		isepar ++;
		if (isepar < 5 || isepar != std::string::npos)
			std::cout << "Invalide ligne value, ligne : " << i << ".\n";
		else
		{
			value = tmp.substr(isepar + 2, tmp.size() - isepar + 1);
			date = tmp.substr(0, isepar - 1);
			if (!checkInput(date, value, data))
				continue;
			else
			{
				std::cout << date << " | " << value * data.getChange(date) << std::endl;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Input must be \'./btc <input file> \'\n";
		return (0);
	}
	try
	{
		Exchange	data("data.csv");

		makeExchange(data, argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}

	return (0);
}