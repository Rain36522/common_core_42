/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exchange.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:36 by pudry             #+#    #+#             */
/*   Updated: 2024/02/13 12:27:37 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EXCHANGE__HPP
# define __EXCHANGE__HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>

class Exchange
{
	public:
		Exchange(std::string dataFile);
		~Exchange(void);
		Exchange(const Exchange &src);
		Exchange	&operator=(const Exchange &src);
		double		getChange(std::string date) const;
		std::string	getLastDate(void) const;


	private:
		std::map<std::string, double>	_dataMap;


};

#endif
