/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:54:28 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/15 14:54:04 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
#define _ZOMBIE_

#include <iostream>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(/* args */);
	~Zombie();
	void announce(void);
	void setZombieName(std::string name);
};


Zombie* zombieHorde( int N, std::string name );

#endif