/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:04:13 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/15 11:25:55 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// allocate a new zombie on the heap
// give it a name and returns it
// to be used out of the function scope
// zombie must be deleted
Zombie* newZombie( std::string name )
{
	Zombie*	z = new Zombie();
	
	z->setZombieName(name);
	return (z);
}