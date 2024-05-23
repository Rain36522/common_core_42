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
		HumanB(std::string str);
		~HumanB(void);
		
		void	setWeapon(Weapon &guns);
		void	attack(void) const;

	private:
		std::string	name;
		Weapon		*weapons;
};


#endif