/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:56:22 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/08 16:27:29 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpp00.hpp"

Contact::Contact()
	: first_name("xxx"), last_name("xxx"), nick_name("xxx"), phone_number("xxx"),
	darkest_secret("xxx")
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

