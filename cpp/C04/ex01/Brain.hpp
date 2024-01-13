/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:52:37 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 18:03:57 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__HPP
# define __BRAIN__HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &src);
		Brain	&operator=(Brain const &src);
	protected:
		std::string	_ideas[100];
};

#endif