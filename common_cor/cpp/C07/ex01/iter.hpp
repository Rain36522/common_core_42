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

template <typename T> void	iter(T *a,  const size_t l, void (*f)(const T &))
{
	for (size_t i = 0; i < l; i++)
		f(a[i]);
};

template <typename T, typename Func> void	iter(T *a,  const size_t l, Func f)
{
	for (size_t i = 0; i < l; i++)
		f(a[i]);
};

#endif
