/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:10:43 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/08 17:29:42 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
#define DEF_CONTACT


#include <string>
#include <iostream>
#include <cstdlib>
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
};

#endif
