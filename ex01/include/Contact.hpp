/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:10:43 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/06 17:59:45 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
#define DEF_CONTACT


#include <string>
#include <iostream>
#include <iomanip>
#include "./PhoneBook.hpp"

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
		// int	setContactInfo(std::string token, std::string value);
		// std::string	getContactInfo(std::string token);
};

#endif
