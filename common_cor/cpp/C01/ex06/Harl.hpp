/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:36:05 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 10:25:31 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{

	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);
	
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};
