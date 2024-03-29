/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/26 10:38:17 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK


#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include "./Contact.hpp"

class PhoneBook
{
	private:
		Contact contact_list[8];
		int	i;
		void readInput(const std::string& prompt, e_token token);
		bool indexIsValid(int& i);
		bool containsWhitespace(const std::string& str);

	public:
		PhoneBook();
		~PhoneBook();
		void addContact(void);
		void searchContact(void);
};

#endif
