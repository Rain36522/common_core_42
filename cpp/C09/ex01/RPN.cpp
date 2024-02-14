/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:27 by pudry             #+#    #+#             */
/*   Updated: 2024/02/13 12:27:28 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool	checkInput(std::string s)
{
	int	in;
	int	iop;

	in = 0;
	iop = 0;
	for (int k = 0; k < s.length(); k ++)
	{
		if (s[k] >= '0' && s[k] <= '9')
			in ++;
		else if (s[k] == '+' || s[k] == '-' || s[k] == '*' || s[k] == '/')
			iop ++;
		else if (s[k] != ' ' && s[k] != '\t')
			return false;
		if (in < 2 && iop > 0)
			return false;
	}
	return (in - 1 == iop);
}

RPN	&RPN::operator=(const RPN &src)
{
	*this = src;	
	return (*this);
}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN::~RPN(void){}

static void	ft_error(std::string msg)
{
	std::cerr << msg << std::endl;
	exit(1);
}

static int	calcul(int n1, int n2, char oper)
{
	if (oper == '+')
		return (n1 + n2);
	else if (oper == '-')
		return (n1 - n2);
	else if (oper == '*')
		return (n1 * n2);
	else
		return (n1 / n2);
}

RPN::RPN(std::string data)
{
	int	n1;
	int	n2;

	_result = 0;
	if (!checkInput(data))
		ft_error("Invalide input.");
	for (int i = 0; i < data.length(); i++)
	{
		if (isdigit(data[i]))
			_stackInt.push(data[i] - '0');
		else if (data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/')
		{
			if (_stackInt.size() < 2)
				ft_error("Invalid input.");
			n1 = _stackInt.top();
			_stackInt.pop();
			n2 = _stackInt.top();
			_stackInt.pop();
			if (data[i] == '/' && !n2)
				ft_error("Error: divid by zero\n");
			_stackInt.push(calcul(n2, n1, data[i]));
		}
	}
	_result = _stackInt.top();
	std::cout << "Result : " << _result << std::endl;	
}
