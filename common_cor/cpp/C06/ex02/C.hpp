/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:32:10 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 10:32:10 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __C__HPP
# define __C__HPP
# include "Base.hpp"
# include <iostream>

class C : public Base
{	
	public:
		virtual std::string	getType(void);
};

# endif