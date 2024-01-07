/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:09:34 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 14:51:02 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ZOMBIE_HPP
# define __ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string str);
		~Zombie(void);
		
		void	announce(void) const;
	private:
		std::string	str;
		int			iz;

};

#endif