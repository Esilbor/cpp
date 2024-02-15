/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:04:13 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/15 14:55:09 by esilbor          ###   ########.fr       */
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
		std::stringstream namestream;
		namestream << name << "_" << i;
		
		horde[i].setZombieName(namestream.str());
	}
	return (horde);
}