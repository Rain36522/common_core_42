/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:53:05 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 13:31:44 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__HPP
# define __CLAPTRAP__HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &src);

		ClapTrap	&operator=(ClapTrap const &src);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int	_HiltPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttakDamage;
};

#endif