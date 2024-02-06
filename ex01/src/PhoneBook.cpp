/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/06 20:31:13 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpp00.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::add_contact(PhoneBook repertoire)
{
	std::cout << "Enter contact's first name : ";
	std::getline(std::cin, PhoneBook::contact_list[0]->first_name);
	std::cout << "you entered the first name : " << PhoneBook::contact_list[0]->first_name << std::endl;


	return;
}
