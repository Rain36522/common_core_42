/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:11:06 by pudry             #+#    #+#             */
/*   Updated: 2024/01/06 16:40:45 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact__HPP
# define Contact__HPP

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	set_contact(char **array);
		void	print_contact(int i) const;
		void	print_full_contact(void) const;
		void	get_new_contact(void);
		char**	put_contact_in_array(void);

	private:
		char*	_fName;
		char*	_lName;
		char*	_nickname;
		char*	_phone;
		char*	_pwd;
};

#endif