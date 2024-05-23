/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:34:45 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 18:13:48 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__HPP
# define __ANIMAL__HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &src);
		Animal	&operator=(Animal const &src);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;

	protected:
		std::string	_type;
		
};

#endif