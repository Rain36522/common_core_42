/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:37:46 by pudry             #+#    #+#             */
/*   Updated: 2024/01/20 14:50:13 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER__HPP
# define __SCALARCONVERTER__HPP

# include <iostream>
# include <string>

enum	e_type
{
	_Int,
	_Char,
	_Str,
	_Double,
	_Float,
	_None
};

class ScalarConverter
{
	public:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter	&operator=(const ScalarConverter &src);

		void		convert(void);
		void		convertFromInt(void);
		void		convertFromFloat(void);
		void		convertFromDouble(void);
		void		convertFromChar(void);

		void		ConvOk(e_type type);

		void		printAll(void) const;

		int			getInt(void) const;
		void		setInt(int i);

		char		getChr(void) const;
		void		setChr(char c);

		float		getFloat(void) const;
		void		setFloat(float f);

		double		getDouble(void) const;
		void		setDouble(double d);

		std::string	getStr(void) const;
		void		setStr(std::string str);

		void		CheckPossible(std::string str);
		e_type		setType(void) const;

	private:
		int			_i;
		char		_c;
		float		_f;
		double		_d;
		bool		_bi;
		bool		_bc;
		bool		_bf;
		bool		_bd;
		std::string	_str;
		e_type		_type;
};

#endif