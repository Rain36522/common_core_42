/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:26:39 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 10:26:39 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE__HPP
# define __BASE__HPP

# include <iostream>

class Base
{
	public:
		Base(void);
		virtual ~Base(void) = 0;
		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);

		virtual std::string	getType(void);
};

# endif