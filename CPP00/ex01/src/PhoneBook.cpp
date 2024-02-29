 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/11 16:46:08 by bbresil          ###   ########.fr       */
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
	while (user_input.empty() || containsWhitespace(user_input))
	{
		if (containsWhitespace(user_input))
			std::cout << "Entries cannot contain white spaces" << std::endl;
		std::cout << prompt;
		getline(std::cin, user_input);
		if (std::cin.eof())
			return ;
	}
	contact_list[i].setContactInfo(token, user_input);
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
	if (!std::cin.eof())
		std::cout << std::endl << "Contact Registered... " << std::endl << std::endl;
	this->i = (i + 1) % 8;
}

bool	PhoneBook::indexIsValid(int& i)
{
	if ((i >= 0 && i <= 7) && (contact_list[i].contactIsValid()))
		return (true);
	return (false);
}

bool is_number(const std::string& str)
{
	for (std::size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
		{
			return false;
		}
	}
	return !str.empty();
}


void	PhoneBook::searchContact(void)
{
	int	j = 0;
	std::string index;
	int i = -1;

	if (!contact_list[0].contactIsValid())
	{
		std::cout << "No contact in the phonebook yet!" << std::endl;
		return ;
	}
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
		contact_list[j].getContactInfo();
		j ++;
	}
	while (!indexIsValid(i))
	{
		std::cout << "Enter contact's index for info: ";
		getline(std::cin, index);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cerr << "EOF detected Bye Bye Baby!" << std::endl;
			return ;
		}
		std::istringstream iss(index);
		if (!is_number(index) || !(iss >> i) || !indexIsValid(i))
		{
			std::cout << "Index invalid!" << std::endl;
		}
	}
	contact_list[i].displayThisContact();

}

bool PhoneBook::containsWhitespace(const std::string& str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (isspace(static_cast<unsigned char>(str[i])) && str[i] != ' ')
		{
			return true;
		}
	}
	return false;
}
