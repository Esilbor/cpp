/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:00:05 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/08 17:27:48 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpp00.hpp"
#include <string.h>

void	user_entry(std::string& user_input, PhoneBook repertoire)
{
	while (user_input != "ADD" && user_input != "SEARCH")
	{
		std::cout << "please use ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "ctrl + D in USER ENTRY";
			return ;
		}
	}
	if (user_input == "ADD" && !std::cin.eof())
	{
		repertoire.addContact();
	}
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
	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	while (user_input != "EXIT")
	{
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "ctrl + D in MAIN";
			return (1);
		}
		user_entry(user_input, repertoire);
	}
	return (0);
}
