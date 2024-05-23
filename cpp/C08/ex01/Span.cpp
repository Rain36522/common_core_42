/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:34:50 by pudry             #+#    #+#             */
/*   Updated: 2024/01/24 16:43:10 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	Span::rangeIterator(unsigned int a, unsigned int b)
{
	unsigned int	c;
	
	if (a > b)
	{
		c = a;
		a = b;
		a = c;
	}
	if (b - a >= _isize - _num.size())
		throw std::out_of_range("Index out of range");

	for (int i = a; i <= b; i ++)
	{
		_num.push_back(i);
	}
}

unsigned int	Span::longestSpan(void) const
{
	int	ilen;

	ilen = 0;
	if (_isize <= 1)
		throw std::out_of_range("Index out of range");
	for (size_t i = 0; i < _isize; i ++)
	{
		for (size_t j = i + 1; j < _isize; j ++)
		{
			if (_num[i] > _num[j])
			{
				if (_num[i] - _num[j] > ilen)
					ilen = _num[i] - _num[j];
			}
			else
			{
				if (_num[j] - _num[i] > ilen)
					ilen = _num[j] - _num[i];
			}
		}
	}
	return (ilen);
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	ilen;

	ilen = 4294967295;
	if (_isize <= 1)
		throw std::out_of_range("Index out of range");
	for (size_t i = 0; i < _isize; i ++)
	{
		for (size_t j = i + 1; j < _isize; j ++)
		{
			if (_num[i] > _num[j])
			{
				if (_num[i] - _num[j] < ilen)
					ilen = _num[i] - _num[j];
			}
			else
			{
				if (_num[j] - _num[i] < ilen)
					ilen = _num[j] - _num[i];
			}
		}
	}
	return (ilen);
}

void	Span::addNumber(unsigned int i)
{
	if (_num.size() < _isize)
		_num.push_back(i);
	else
		throw std::overflow_error("Index owerflow");
}

Span	&Span::operator=(const Span &src)
{
	this->_num = src._num;
	this->_isize = src._isize;
	return (*this);
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span(void) {}

Span::Span(unsigned int i) : _isize(i) {}

