/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:30:56 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:31:06 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__HPP
# define __HUMANA__HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string str, Weapon &guns);
		~HumanA(void);

		void	attack(void) const;
	
	private:
		Weapon		&gun;
		std::string	name;

};

#endif