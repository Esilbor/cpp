/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:10:49 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/15 11:24:29 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// create a zombie on the stack, give it a name and make it
// introduce itself
void randomChump( std::string name )
{
	Zombie	z;
	z.setZombieName(name);
	z.announce();
}