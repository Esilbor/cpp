/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:54:28 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/26 12:13:20 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
#define _ZOMBIE_

#include <iostream>

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

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
