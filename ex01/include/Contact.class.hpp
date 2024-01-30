/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:10:43 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/30 12:13:08 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP


#include <string>
#include <iostream>
#include "./PhoneBook.class.hpp"

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
