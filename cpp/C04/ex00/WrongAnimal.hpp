/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:34:45 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 16:49:22 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL__HPP
# define __WRONGANIMAL__HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal	&operator=(WrongAnimal const &src);

		void			makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif