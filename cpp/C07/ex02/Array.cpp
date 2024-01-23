/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:38:49 by pudry             #+#    #+#             */
/*   Updated: 2024/01/23 15:39:54 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
const T	&Array<T>::operator[](int i) const
{
	if (i >= _lenth)
		throw std::out_of_range("Index out of range");
	else
		return (_data[i]); 
}

template <typename T>
T	&Array<T>::operator[](int i)
{
	if (i >= _lenth)
		throw std::out_of_range("Index out of range");
	else
		return (_data[i]); 
}

template <typename T>
T	&Array<T>::operator=(const Array<T> &src)
{
	this->_data = src._data;
	this->_lenth = src._lenth;
	return (*this);
}

template <typename T>
Array<T>::Array(const Array &src)
{
	*this->_data = src._data;
	*this->_lenth = src._lenth;
}
template <typename T>
Array<T>::~Array(void)
{
	if (this->_data && this->_lenth > 0)
		delete[] this->_data;
	
}

template <typename T>
Array<T>::Array(void)
{
	this->_data = NULL;
	this->_lenth = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_lenth = n;
	this->_data = new T[n];
}