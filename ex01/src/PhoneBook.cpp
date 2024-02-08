/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/08 17:03:12 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpp00.hpp"

PhoneBook::PhoneBook() : i(0)
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::readInput(const std::string& prompt, e_token token)
{
	std::string user_input;

	while (true)
	{
		std::cout << prompt;
		while (user_input.empty())
		{
			getline(std::cin, user_input);
			if (std::cin.eof())
			{
				std::cin.clear();
				std::cout << "ctrl + D bye bye baby!";
				return ;
			}
			if (user_input.empty())
			{
				std::cout << prompt;
				break;
			}
		}
	}
	contact_list[i].set_contact_info(token, user_input);
}

void PhoneBook::addContact()
{
	readInput("Enter contact's first name: ", FIRST);
	readInput("Enter contact's last name: ", LAST);
	readInput("Enter contact's nickname: ", NICK);
	readInput("Enter contact's phone number: ", PHONE);
	readInput("Enter contact's darkest secret: ", DARK);
	i = (i + 1) % 8;
}
