/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:10:25 by pudry             #+#    #+#             */
/*   Updated: 2024/01/09 14:32:25 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__HPP
# define __FIXED__HPP

class Fixed
{
	public:
		Fixed(void);
		~Fixed();
		Fixed(const Fixed &src);
		Fixed	&operator=(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_rawBits;
		static const int	_iliteral = 8;

};

#endif