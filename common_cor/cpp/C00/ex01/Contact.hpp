/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:23:03 by pudry             #+#    #+#             */
/*   Updated: 2024/01/07 11:17:29 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public :
		Contact(void);
		~Contact(void);

		std::string	get_fname(void) const;
		std::string	get_lname(void) const;
		std::string	get_nick(void) const;
		std::string	get_phone(void) const;
		std::string	get_pwd(void) const;
		
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nick(std::string str);
		void		set_phone(std::string str);
		void		set_pwd(std::string str);

	private:
		std::string	_fName;
		std::string	_lName;
		std::string	_Nickname;
		std::string	_Phone;
		std::string	_Pwd;
};
#endif