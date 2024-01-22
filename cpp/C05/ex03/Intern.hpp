/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:21:44 by pudry             #+#    #+#             */
/*   Updated: 2024/01/18 10:21:58 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__HPP
# define __INTERN__HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &src);
		Intern	&operator=(const Intern &src);

		AForm	*makeForm(std::string type, std::string target) const;
};

#endif