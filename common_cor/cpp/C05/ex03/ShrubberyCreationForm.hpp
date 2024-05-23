/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:56:18 by pudry             #+#    #+#             */
/*   Updated: 2024/01/17 14:56:18 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM__HPP
# define __SHRUBBERYCREATIONFORM__HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);

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