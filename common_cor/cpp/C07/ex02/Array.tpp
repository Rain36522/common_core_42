/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:02:19 by pudry             #+#    #+#             */
/*   Updated: 2024/01/24 12:39:09 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
	delete[] this->_data;
	this->_lenth = src._lenth;
	this->_data = new T[src._lenth];
	for (int i = 0; i < src._lenth; i ++)
		this->_data[i] = src._data[i];
	return (*this);
}

template <typename T>
Array<T>::Array(const Array &src)
{
	this->_lenth = src._lenth;
	this->_data = new T[src._lenth];
	for (int i = 0; i < src._lenth; i ++)
		this->_data[i] = src._data[i];
	
}
template <typename T>
Array<T>::~Array(void)
{
	delete[] this->_data;
}

template <typename T>
Array<T>::Array(void)
{
	this->_lenth = 0;
	this->_data = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_lenth = n;
	this->_data = new T[n];
}