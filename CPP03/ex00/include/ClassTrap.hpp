/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:12:38 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/23 17:19:05 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLASSTRAP_HPP_
#define _CLASSTRAP_HPP_
#include <iostream>
#include <string>

class ClassTrap
{
private:
	std::string _name;
	unsigned int _hitPoint;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
public:
	ClassTrap();
	ClassTrap(std::string name);
	~ClassTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

ClassTrap::ClassTrap()
{
}

ClassTrap::ClassTrap(std::string name) : _name(name)
{
}

ClassTrap::~ClassTrap()
{
}


#endif