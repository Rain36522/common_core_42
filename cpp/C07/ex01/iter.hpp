/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:37:59 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 14:37:59 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ITER__HPP
# define __ITER__HPP
# include <iostream>

template <typename T> 
void	iter(T a[], size_t ilen, void (*f)(T&))
{
	for (size_t i = 0; i < ilen; i ++)
		f(a[i]);
}

#endif
