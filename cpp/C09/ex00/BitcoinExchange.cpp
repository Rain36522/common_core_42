/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:38 by pudry             #+#    #+#             */
/*   Updated: 2024/02/22 08:02:30 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double		BitcoinExchange::getChange(std::string date) const
{
	std::map<std::string, double>::const_iterator	it = _dataMap.begin();

	while (it != _dataMap.end())
	{
		if (date.compare(it->first) < 0)
		{
			if (it != _dataMap.begin())
				it --;
			return (it->second);
		}
		it ++;
	}
	return 0;
}

std::string	BitcoinExchange::getLastDate(void) const
{
	std::map<std::string, double>::const_iterator it = _dataMap.end();

	return (it->first);
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &src)
{
	this->_dataMap = src._dataMap;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(std::string dataFile)
{
	std::ifstream	file;
	std::string		tmp;
	std::string		date;
	std::string		change;
	int				isepar;

	file.open(dataFile);
	if (file.fail())
		throw std::ifstream::failure("Error opening data file");
	getline(file, tmp);
	while (getline(file, tmp))
	{
		isepar = tmp.find(",");
		change = tmp.substr(isepar + 1, tmp.size() - isepar);
		date = tmp.substr(0, isepar);
		_dataMap[date] = std::stod(change);
	}
}
