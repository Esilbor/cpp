/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:00:05 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/11 18:33:13 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpp00.hpp"

void	user_entry(std::string& user_input, PhoneBook& repertoire)
{
	while (user_input.compare("ADD") && user_input.compare("SEARCH")  && user_input.compare("EXIT"))
	{
		std::cout << "Please use ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		getline(std::cin, user_input);
		if (std::cin.eof())
			return ;
	}
	if (user_input == "ADD" && !std::cin.eof())
		repertoire.addContact();
	if (user_input == "SEARCH" && !std::cin.eof())
		repertoire.searchContact();
	user_input = "";
	return ;
}

int	main(int argc, char **argv)
{
	if (argc < 1)
	{
		std::cout << "Program does not take any argument" << std::endl;
		return (1);
	}
	std::string	user_input;
	PhoneBook repertoire;
	std::cout << "Welcome to your Awesome PhoneBook!" << std::endl;
	while (1)
	{
		user_entry(user_input, repertoire);
		if (user_input == "EXIT" || std::cin.eof()) // if ctrl+D has been detected
		{
			return (1);
		}
	}
	return (0);
}
