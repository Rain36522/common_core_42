/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:09:34 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 14:46:30 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ZOMBIE_HPP
# define __ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		
		void	announce(void) const;
		void	set_name(std::string);
		
	private:
		std::string	str;
		int			iz;

};

#endif