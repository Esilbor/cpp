/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/30 12:13:25 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP


#include <string>
#include <iostream>
#include "./Contact.class.hpp"

class PhoneBook
{
	private:
		Contact contactList[8];
	public:
		PhoneBook(/* args */);
		~PhoneBook();
		int	setContactList(std::string contact);
		int	getContactList(void);
};

#endif
