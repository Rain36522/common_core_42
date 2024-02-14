/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:27:29 by pudry             #+#    #+#             */
/*   Updated: 2024/02/13 12:27:31 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN__HPP
# define __RPN__HPP

# include <iostream>
# include <stack>

class RPN
{
	public:
		RPN(std::string data);
		~RPN(void);
		RPN(const RPN &src);
		RPN	&operator=(const RPN &src);

	private:
		std::stack<int>		_stackInt;
		int					_result;

};

#endif
