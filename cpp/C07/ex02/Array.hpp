/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:21:06 by pudry             #+#    #+#             */
/*   Updated: 2024/01/23 15:21:06 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__HPP
# define __ARRAY__HPP

# include <iostream>

template <class T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(const Array &src);
		T	&operator=(const Array &src);

		T		&operator[](int i);
		const T	&operator[](int i) const;
	private:
		T		*_data;
		size_t	_lenth;
};

#endif