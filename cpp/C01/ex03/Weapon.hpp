/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:35:13 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 15:46:06 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WEAPON__HPP
# define __WEAPON__HPP

#include <iostream>

class Weapon
{
	public:
		Weapon(void);
		~Weapon(void);

		std::string	getType(void) const;
		void		setType(std::string str);
	
	private:
		std::string	type;

};


#endif