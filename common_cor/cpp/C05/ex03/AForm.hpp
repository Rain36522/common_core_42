/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:03:47 by pudry             #+#    #+#             */
/*   Updated: 2024/01/17 15:03:47 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__HPP
# define __FORM__HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm(std::string name, int sign, int exe);
		virtual ~AForm(void);
		AForm(const AForm &src);
		AForm	&operator=(const AForm &src);

		void	signForm(const Bureaucrate &src);
		void	virtual execute(const Bureaucrate src) = 0;
		bool	getSign(void) const;

    	class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Grade too low for sign"; }
		};
	
	protected:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSigne;
		const int			_gradeExe;
};


#endif