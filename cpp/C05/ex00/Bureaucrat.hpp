/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:48:46 by pudry             #+#    #+#             */
/*   Updated: 2024/01/16 13:48:46 by pudry            ###   ########.ch       */
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
		
		    class GradeTooHighException : public std::exception {
				public:
					virtual const char* what() const throw() { return "Grade too high"; }
			};
    		class GradeTooLowException : public std::exception {
				public:
					virtual const char* what() const throw() { return "Grade too low"; }
			};

	private:
		std::string	_name;
		int			_grade;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrate &src);

#endif