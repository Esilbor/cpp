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
	if (!std::cin.eof())
		std::cout << std::endl << "Contact Registered... " << std::endl << std::endl;
	i = (i + 1) % 8;
}

bool	PhoneBook::index_is_valid(int& i)
{
	if ((i >= 0 && i <= 7) && (contact_list[i].contact_is_valid()))
		return (true);
	return (false);
}
// A REVOIR
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

	if (!contact_list[0].contact_is_valid())
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
		contact_list[j].get_contact_info();
		j ++;
	}
	while (!index_is_valid(i))
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
		if (!is_number(index) || !(iss >> i) || !index_is_valid(i))
		{
			std::cout << "Index invalid!" << std::endl;
		}
	}
	contact_list[i].display_this_contact();

}
