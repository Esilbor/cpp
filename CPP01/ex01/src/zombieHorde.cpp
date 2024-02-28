/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:04:13 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/28 12:48:03 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// allocate N zombies in one allocation
// gives each zombie the name
// return a ptr to the first zombie
Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);

	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream namestream; // stringstream is usefull to operate concatenation in the string with other types
		namestream << name << '_' << i; // such as here where name is concatenated with the char _ and the int i

		horde[i].setZombieName(namestream.str());
	}
	return (horde);
}
