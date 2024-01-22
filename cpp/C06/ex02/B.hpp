/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:30:54 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 10:30:54 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __B__HPP
# define __B__HPP
# include "Base.hpp"
# include <iostream>

class B : public Base
{	
	public:
		virtual std::string	getType(void);
};

# endif