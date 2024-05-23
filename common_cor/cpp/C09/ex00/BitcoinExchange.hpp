/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:36 by pudry             #+#    #+#             */
/*   Updated: 2024/02/22 08:01:58 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EXCHANGE__HPP
# define __EXCHANGE__HPP

#define RESET   " \033[0m"
#define RESETN   << "\033[0m\n"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"
#define ORANGE  "\033[38;5;208m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"
#define	HBLUE	"\033[48;5;17m"
#define HRED	"\033[41m"
#define BOLD	"\033[1m"
#define NOBOLD	"\033[0m"
#define DEBUG std::cout << "\033[31m" << __FILE__ << __LINE__ << "\033[0m" << std::endl;

# include <iostream>
# include <map>
# include <fstream>
# include <string>

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string dataFile);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange	&operator=(const BitcoinExchange &src);
		double		getChange(std::string date) const;
		std::string	getLastDate(void) const;


	private:
		std::map<std::string, double>	_dataMap;


};

#endif
