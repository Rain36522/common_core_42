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

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

bool	checkNumberDate(std::string date)
{
	std::string	s;

	s = "2024";
	for (int i = 0; i < 4; i++)
	{
		if (date[i] < s[i])
			break;
		else if (date[i] > s[i])
			return false;
	}
	s = "xxxx-12";
	for (int i = 4; i < 7; i++)
	{
		if (date[i] < s[i])
			break;
		else if (date[i] > s[i])
			return false;
	}
	s = "xxxx-xx-31";
	for (int i = 7; i < 10; i++)
	{
		if (date[i] < s[i])
			break;
		else if (date[i] > s[i])
			return false;
	}
	return true;
}

bool	checkFormatDate(std::string date, BitcoinExchange data)
{
	if (date.size() != 10)
	{
		std::cout << ORANGE << "Invalide format => " << date RESETN;
		return (false);
	}
	for (int i = 0; i < date.size(); i ++)
	{
		if (!isdigit(date[i]) && date[i] != '-')
		{
			std::cout << ORANGE << "Invalide format => " << date RESETN;
			return (false);
		}
		if (date[i] == '-' && i != 4 && i != 7)
		{
			std::cout << ORANGE << "Invalide format => " << date RESETN;
			return (false);
		}
	}
	return (checkNumberDate(date));
}

bool	checkFormatChange(std::string date, double value, BitcoinExchange data)
{
	value = data.getChange(date) * value;
	if (value < 0 || value > 1000)
	{
		std::cout << ORANGE << "Value over range => " << value RESETN;
		return (false);
	}
	return true;
}

bool	checkInput(std::string date, double value, BitcoinExchange data)
{
	return (checkFormatDate(date, data) && checkFormatChange(date, value, data));		
}

void	makeExchange(BitcoinExchange data, std::string file)
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
	getline(infile, tmp);
	while (getline(infile, tmp))
	{
		isepar = tmp.find(" | ");
		isepar ++;
		if (isepar != 11)
			std::cout << ORANGE << "Invalide value ligne : " << tmp RESETN;
		else
		{
			value = std::stod(tmp.substr(isepar + 2, tmp.size() - isepar + 1));
			date = tmp.substr(0, isepar - 1);
			if (!checkInput(date, value, data))
				continue;
			else
				std::cout << BLUE << date << " | " << value << " => " << value * data.getChange(date) RESETN;
		}
		i ++;
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
		BitcoinExchange	data("data.csv");

		makeExchange(data, argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() RESETN;
		return (1);
	}

	return (0);
}