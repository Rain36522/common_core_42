/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:26:18 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 09:26:18 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER__HPP
# define __SERIALIZER__HPP

# include <iostream>
# include <cstdint>

typedef struct s_Data
{
	int	i;
}	Data;

class Serializer
{
	public:
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer &src);
		Serializer	&operator=(const Serializer &src);

		static	uintptr_t	serialize(Data *ptr);
		static	Data		*deserialize(uintptr_t raw);

};

#endif