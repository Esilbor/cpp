/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:56:22 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/29 10:54:04 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpp00.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void	Contact::setContactInfo(e_token token, std::string& value)
{
	switch (token)
	{
		case FIRST:
			first_name = value;
			break;
		case LAST:
			last_name = value;
			break;
		case NICK:
			nick_name = value;
			break;
		case PHONE:
			phone_number = value;
			break;
		case DARK:
			darkest_secret = value;
			break;
		default:
			std::cout << "wrong token entered" << std::endl;
	}
}

void Contact::getContactInfo()
{
	std::string trunc_first_name = first_name.substr(0, 10);
	std::string trunc_last_name = last_name.substr(0, 10);
	std::string trunc_nick_name = nick_name.substr(0, 10);

	if (first_name.length() > 10)
		trunc_first_name[9] = '.';
	if (last_name.length() > 10)
		trunc_last_name[9] = '.';
	if (nick_name.length() > 10)
		trunc_nick_name[9] = '.';

	std::cout << "|" << std::setw(10) << trunc_first_name
			<< "|" << std::setw(10) << trunc_last_name
			<< "|" << std::setw(10) << trunc_nick_name
			<< "|" << std::endl;
}

void	Contact::displayThisContact()
{
	std::cout << std::endl;
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nick_name << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
	std::cout << std::endl;


}

bool	Contact::contactIsValid()
{
	if (!first_name.empty())
	{
		return (true);
	}
	return (false);
}
