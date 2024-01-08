/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:33:49 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:33:49 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__HPP
# define __HUMANB__HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void	setWeapon(Weapon gun);
		void	attack(void) const;

	private:
		std::string	name;
		Weapon&		Weapon;
};


#endif