/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/29 19:20:24 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP


#include <string>
#include <iostream>

class PhoneBook
{
	private:
		std::string contactList[8];
	public:
		PhoneBook(/* args */);
		~PhoneBook();
		int	setContactList(std::string contact);
		int	getContactList(void);
};

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact(/*args*/);
		~Contact();
		int			setContactInfo(std::string token);
		std::string	getContactInfo(std::string token);
};

#endif
