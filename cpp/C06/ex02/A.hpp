/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:21:30 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 10:23:45 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A__HPP
# define __A__HPP
# include "Base.hpp"
# include <iostream>

class A : public Base
{	
	public:
		virtual std::string	getType(void);
};

# endif