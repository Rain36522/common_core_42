/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SclavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:53:05 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 14:01:48 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCLAVTRAP__HPP
# define __SCLAVTRAP__HPP

#include <iostream>
#include "ClapTrap.hpp"

class SclavTrap : public ClapTrap
{
	public:
		SclavTrap(std::string name);
		~SclavTrap(void);
		SclavTrap(const SclavTrap &src);

		void	attack(std::string target);
		void	guardGate();

		SclavTrap	&operator=(SclavTrap const &src);
};

#endif