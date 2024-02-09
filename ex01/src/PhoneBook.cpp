/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/09 18:31:44 by bbresil          ###   ########.fr       */
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

void	PhoneBook::readInput(const std::string& prompt, e_token token)
{
	std::string user_input;
	while (user_input.empty())
	{
		std::cout << prompt;
		getline(std::cin, user_input);
		if (std::cin.eof())
		{
			return ;
		}
	}
	contact_list[i].set_contact_info(token, user_input);

}

void	PhoneBook::addContact()
{
	if (!std::cin.eof())
		readInput("Enter contact's first name: ", FIRST);
	if (!std::cin.eof())
		readInput("Enter contact's last name: ", LAST);
	if (!std::cin.eof())
		readInput("Enter contact's nickname: ", NICK);
	if (!std::cin.eof())
		readInput("Enter contact's phone number: ", PHONE);
	if (!std::cin.eof())
		readInput("Enter contact's darkest secret: ", DARK);
	i = (i + 1) % 8;
}

void	PhoneBook::searchContact(void)
{
	int	j = 0;

	std::cout << "_____________________________________________" << std::endl;
    std::cout << "|" << std::setw(10) << "INDEX"
              << "|" << std::setw(10) << "FIRST NAME"
              << "|" << std::setw(10) << "LAST NAME"
              << "|" << std::setw(10) << "NICKNAME"
              << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (j <= 7)
	{
		std::cout << " " << std::setw(10) << j;
		contact_list[j].get_contact_info();
		j ++;
	}

}
