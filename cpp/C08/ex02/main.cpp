/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:11:38 by pudry             #+#    #+#             */
/*   Updated: 2024/02/12 11:19:09 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main()
{
	MutantStack<int> mstack;
	std::cout << "Stack add 5\n";
	mstack.push(5);
	std::cout << "Stack add 17\n";
	mstack.push(17);
	std::cout << "Stack top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "Stack add 3, 5, 737, 0\n";
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Stack element : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}