/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:10:25 by pudry             #+#    #+#             */
/*   Updated: 2024/01/25 11:45:23 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__HPP
# define __FIXED__HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int in);
		Fixed(const float fn);
		~Fixed();
		Fixed(const Fixed &src);

		Fixed	&operator=(Fixed const &src);
		Fixed	operator++(int i);
		Fixed	operator--(int i);
		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator+(Fixed const &src);
		Fixed	operator-(Fixed const &src);
		Fixed	operator*(Fixed const &src);
		Fixed	operator/(Fixed const &src);
		bool	operator==(Fixed const &src);
		bool	operator>=(Fixed const &src);
		bool	operator<=(Fixed const &src);
		bool	operator!=(Fixed const &src);
		bool	operator>(Fixed const &src);
		bool	operator<(Fixed const &src);	

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	min(Fixed const &f1, Fixed const &f2);
		static Fixed	min(Fixed &f1, Fixed &f2);
		static Fixed	max(Fixed const &f1, Fixed const &f2);
		static Fixed	max(Fixed &f1, Fixed &f2);

	private:
		int					_rawBits;
		static const int	_iliteral;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &src);
#endif