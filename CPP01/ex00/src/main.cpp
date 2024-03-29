/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:52:09 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/26 12:09:44 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
	(void) argv;
	if (argc > 1)
	{
		std::cout << "No need for extra blood..." << std::endl;
		return (1);
	}
	Zombie* michonne = newZombie("Michonne");
	michonne->announce();
	randomChump("Jack");
	randomChump("Dimitri");
	delete michonne;
	return (0);
}
