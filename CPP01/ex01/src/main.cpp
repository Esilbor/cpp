/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:52:09 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/15 14:56:19 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
	(void) argv;
	if (argc < 1)
	{
		std::cout << "No need for extra blood..." << std::endl;
		return (1);
	}
	int h = 5;
	Zombie* devilHorde = zombieHorde(h, "Wolf");
	for (int i = 0; i < h; i++)
		devilHorde[i].announce();
	delete[] devilHorde;
	return (0);
}