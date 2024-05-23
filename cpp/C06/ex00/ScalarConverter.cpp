/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:30:04 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 08:35:06 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::setStr(std::string str)
{
	this->_str = str;
}

std::string	ScalarConverter::getStr(void) const
{
	return (this->_str);
}

void	ScalarConverter::setDouble(double d)
{
	this->_d = d;
}

double	ScalarConverter::getDouble(void) const
{
	return (this->_d);
}

void	ScalarConverter::setFloat(float f)
{
	this->_f = f;
}

float	ScalarConverter::getFloat(void) const
{
	return (this->_f);
}

void	ScalarConverter::setChr(char c)
{
	this->_c = c;
}

char	ScalarConverter::getChr(void) const
{
	return (this->_c);
}

void	ScalarConverter::setInt(int i)
{
	this->_i = i;
}

int	ScalarConverter::getInt(void) const
{
	return (this->_i);
}

void	ScalarConverter::CheckPossible(std::string str)
{
	int	i;

	ConvOk(_None);
	this->_type = _None;
	try
	{
		std::stof(str);
		ConvOk(_Float);
	}
	catch(const std::exception& e)
	{
		this->_bf = false;
	}
	try
	{
		std::stod(str);
		ConvOk(_Double);
	}
	catch (const std::exception& e)
	{
		this->_bd = false;
	}
	try
	{
		i = stoi(str);
		ConvOk(_Int);
		if (i >= 0 && i <= 127)
			ConvOk(_Char);
	}
	catch (const std::exception& e)
	{
		this->_bi = false;
	}
}

e_type	ScalarConverter::setType() const
{
	if (this->_bc)
		return (_Char);
	else if (this->_bf)
		return (_Float);
	else if (this->_bi)
		return (_Int);
	else if (this->_bd)
		return (_Double);
	else
		return (_None);
}

void	ScalarConverter::printAll(void) const
{
	if (this->_bc)
		std::cout << "char : " << this->getChr() << std::endl;
	else
		std::cout << "char : Impossible to print"<< std::endl;
	if (this->_bc || this->_bi)
		std::cout << "Int : " << this->getInt() << std::endl;
	else
		std::cout << "Int : Impossible to print"<< std::endl;
	if (this->_bc || this->_bf)
	{
		std::cout << "Float : " << this->getFloat();
		if (round(this->getFloat()) == this->getFloat())
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f\n";
	}
	else
		std::cout << "Float : Impossible to print"<< std::endl;
	if (this->_bc || this->_bd || this->_bi)
	{

		std::cout << "Double : " << this->getDouble();
		if (round(this->getDouble()) == this->getDouble())
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
		std::cout << "Double : Impossible to print"<< std::endl;
}

void	ScalarConverter::convertFromInt(void)
{
	this->_i = stoi(this->_str);
	this->_c = static_cast<char>(this->_i);
	this->_d = static_cast<double>(this->_i);
	this->_f = static_cast<float>(this->_i);
}

void	ScalarConverter::convertFromFloat(void)
{
	this->_f = std::stof(this->_str);
	this->_c = static_cast<char>(this->_f);
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
}

void	ScalarConverter::convertFromDouble(void)
{
	this->_d = std::stod(this->_str);
	this->_c = static_cast<char>(this->_d);
	this->_f = static_cast<float>(this->_d);
	this->_i = static_cast<int>(this->_d);
}

void	ScalarConverter::convertFromChar(void)
{
	this->_c = this->_str[0];
	this->_i = static_cast<int>(this->_c);
	this->_d = static_cast<double>(this->_c);
	this->_f = static_cast<float>(this->_c);
}

void	ScalarConverter::ConvOk(e_type type)
{
	if (type == _None)
	{
		this->_bc = false;
		this->_bi = false;
		this->_bf = false;
		this->_bd = false;
	}
	else if (type == _Char)
		this->_bc = true;
	else if (type == _Int)
		this->_bi = true;
	else if (type == _Float)
		this->_bf = true;
	else if (type == _Double)
		this->_bd = true;
}

void	ScalarConverter::convert(void)
{
	if (this->_str == "")
		this->_type = _None;
	else
	{
		this->CheckPossible(this->_str);
		this->_type = this->setType();
	}
	if (this->_type == _Int)
		convertFromInt();
	else if (this->_type == _Float)
		convertFromFloat();
	else if (this->_type == _Double)
		convertFromDouble();
	else if (this->_type == _Char)
		convertFromChar();
	if (this->_type == _None)
		std ::cout << "Invalid input for conversion : " << this->_str << std::endl;
	else
		printAll();
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &src)
{
	this->_c = src._c;
	this->_i = src._i;
	this->_f = src._f;
	this->_d = src._d;
	this->_str = src._str;
	return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter::ScalarConverter(void) {}