/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:41:13 by pudry             #+#    #+#             */
/*   Updated: 2024/01/18 09:42:54 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__HPP
# define __PRESIDENTIALPARDONFORM__HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string name);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);

		void	execute(const Bureaucrate src);

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Grade too low for execute : "; }
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