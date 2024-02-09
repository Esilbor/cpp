/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:56:22 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/09 18:30:07 by bbresil          ###   ########.fr       */
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

void	Contact::set_contact_info(e_token token, std::string& value)
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

void Contact::get_contact_info()
{
	std::string trunc_first_name = first_name.substr(0, 10);
	std::string trunc_last_name = last_name.substr(0, 10);
	std::string trunc_nick_name = nick_name.substr(0, 10);

	std::cout << "|" << std::setw(10) << trunc_first_name
			<< "|" << std::setw(10) << trunc_last_name
			<< "|" << std::setw(10) << trunc_nick_name
			<< "|" << std::endl;
}

std::string	Contact::get_contact_info(e_token token)
{
	switch (token)
	{
		case FIRST:
			return (this->first_name);
		case LAST:
			return (this->last_name);
		case NICK:
			return (this->nick_name);
		case PHONE:
			return (this->phone_number);
		case DARK:
			return (this->darkest_secret);
		default:
			std::cout << "wrong token entered" << std::endl;
			return ("");
	}
}

