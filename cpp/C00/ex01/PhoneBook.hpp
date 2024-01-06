/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:09:15 by pudry             #+#    #+#             */
/*   Updated: 2024/01/06 17:52:38 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK__HPP
# define PHONEBOOK__HPP

# include "Contact.hpp"

class PhoneBook
{
	public:

		int	last_line;

		PhoneBook(void);
		~PhoneBook (void);

		char** 	give_contact(int iline) const;
		void 	set_contact(char **array);
		int 	is_contact(int i) const;
	
	private:
		char*	_fName[8];
		char*	_lName[8];
		char*	_nickname[8];
		char*	_phone[8];
		char*	_pwd[8];
	
};
#endif
