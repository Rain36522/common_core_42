/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:46:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 18:13:19 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__HPP
# define __CAT__HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &src);

		Cat		&operator=(Cat const &src);
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif