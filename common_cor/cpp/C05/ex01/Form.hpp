/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:30:07 by pudry             #+#    #+#             */
/*   Updated: 2024/01/16 14:30:07 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__HPP
# define __FORM__HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name, int sign, int exe);
		~Form(void);
		Form(const Form &src);
		Form	&operator=(const Form &src);

		void	signForm(const Bureaucrate &src);
		
    	class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Grade too low for sign"; }
		};
	
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSigne;
		const int			_gradeExe;
};


#endif