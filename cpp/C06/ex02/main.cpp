/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:44:53 by pudry             #+#    #+#             */
/*   Updated: 2024/01/22 10:51:59 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <iostream>

int	main(void)
{
	Base	*a;
	Base	*b;
	Base	*c;

	a = new A();
	a->identify(a);
	b = a->generate();
	b->identify(b);
	delete a;
	for (int i = 0; i < 10; i ++)
	{
		c = b->generate();
		b->identify(c);
		delete c;
		for (int j = 0; j < 547483647; j ++);
	}
	delete b;
	


}