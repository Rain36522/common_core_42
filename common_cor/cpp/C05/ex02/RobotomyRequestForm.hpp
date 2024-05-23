/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:15:01 by pudry             #+#    #+#             */
/*   Updated: 2024/01/17 15:15:22 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM__HPP
# define __ROBOTOMYREQUESTFORM__HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string name);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);

		void	execute(const Bureaucrate src);

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Grade too low for execute"; }
		};
		class ErrorFile : public std::exception {
			public:
				virtual const char* what() const throw() { return "Error opening file"; }
		};
		class FormNotSign : public std::exception {
			public:
				virtual const char* what() const throw() { return "Error formular not signed"; }
		};
};

#endif