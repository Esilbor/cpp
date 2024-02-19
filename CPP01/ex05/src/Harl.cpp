/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:02 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/19 21:25:40 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "This is a debug statement" << std::endl;
}
void	Harl::info()
{
	std::cout << "This is an info statement" << std::endl;
}
void	Harl::warning()
{
	std::cout << "This is a warning statement" << std::endl;
}
void	Harl::error()
{
	std::cout << "This is an error statement" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*function[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*function[i])();
			break;
		}
	}
}
