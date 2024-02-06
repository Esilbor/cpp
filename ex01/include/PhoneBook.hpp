/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/06 20:20:37 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK


#include <string>
#include <iostream>
#include <iomanip>
#include "./Contact.hpp"

enum e_token
{
	first,
	last,
	nick,
	phone,
	dark
};

class PhoneBook
{
	private:
		Contact contact_list[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(PhoneBook repertoire);
		// int	set_contact(e_token token, std::string info);
		// int	getContactList(void);
};

#endif
