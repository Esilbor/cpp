/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:06:17 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 17:16:11 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap: default constructor called" << std::endl;
	this->setName("Tom");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN "ScavTrap: " << name << " constructor called" RESET << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) // no need to call ~ClapTrap()
{
	std::cout << MAGENTA "ScavTrap: " << this->getName()
	<< " Destructor called" RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{

	std::cout << MAGENTA "ScavTrap " << this->getName()
	<< " prepares an attack on " << target << RESET << std::endl;
	ClapTrap::attack(target);
}
void ScavTrap::guardGate(void)
{
	std::cout << GREEN "ScavTrap " << this->getName() 
	<< " is now in Gate keeper mode" RESET << std::endl;
}

void ScavTrap::attack(ClapTrap& target)
{
	std::cout << YELLOW "ScavTrap " << this->getName() << " decided to attack "
	<< target.getName() << RESET << std::endl;
	ClapTrap::attack(target);
}
