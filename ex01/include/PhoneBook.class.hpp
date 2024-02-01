/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/30 18:06:54 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK


#include <string>
#include <iostream>
#include "./Contact.class.hpp"
#include <array> // for tabs of fixed sizes

class PhoneBook
{
	private:
		// Contact contactList[8];
		std::array<Contact, 8> contactList{};
	public:
		PhoneBook(/* args */);
		~PhoneBook();
		int	setContactList(std::string contact);
		int	getContactList(void);
};

#endif
