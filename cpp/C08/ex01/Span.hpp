/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:56:46 by pudry             #+#    #+#             */
/*   Updated: 2024/01/24 16:34:42 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __SPAN__HPP
# define __SPAN__HPP

# include <iostream>
# include <vector>

class Span
{
	public:
		Span(unsigned int n);
		~Span(void);
		Span(const Span &src);
		Span	&operator=(const Span &src);

		void			addNumber(unsigned int i);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		void			rangeIterator(unsigned int a, unsigned int b);

	private:
		std::vector<unsigned int>	_num;
		unsigned int				_isize;

};

#endif