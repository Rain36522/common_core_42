/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:16:14 by pudry             #+#    #+#             */
/*   Updated: 2024/01/13 18:20:48 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRATE_HPP
# define __BUREAUCRATE_HPP

#include <iostream>

class Bureaucrate
{
	public:
		Bureaucrate(std::string sname, int igrade);
		~Bureaucrate(void);
		Bureaucrate(const Bureaucrate &src);
		Bureaucrate	&operator=(const Bureaucrate &src);
		Bureaucrate	operator++(void);
		Bureaucrate	operator--(void);

		int			getGrade(void) const;
		std::string	getName(void) const;

	private:
		std::string	_name;
		int			_grade;
};
#endif