/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:10:43 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/11 19:00:45 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
#define DEF_CONTACT


#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include "./PhoneBook.hpp"

enum e_token
{
	FIRST,
	LAST,
	NICK,
	PHONE,
	DARK
};

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact();
		~Contact();

		void	set_contact_info(e_token token, std::string& value);
		std::string	get_contact_info(e_token token);
		void	get_contact_info();
		void	display_this_contact();
		bool	contact_is_valid();
};

#endif
