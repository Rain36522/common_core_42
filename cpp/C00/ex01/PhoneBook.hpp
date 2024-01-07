/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:23:36 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 11:15:58 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	public:
		int		init_ctc;

		PhoneBook(void);
		~PhoneBook(void);

		void	get_new_contact(void);
		void	put_contact_list(void);
		void	put_one_contact(int ictc) const;

	private:
		Contact	ctc[8];
		int		i;
};
#endif