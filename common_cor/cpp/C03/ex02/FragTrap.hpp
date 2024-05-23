/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:53:05 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 14:13:54 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__HPP
# define __FRAGTRAP__HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &src);

		void	attack(std::string target);
		void	highFivesGuys();

		FragTrap	&operator=(FragTrap const &src);
};

#endif