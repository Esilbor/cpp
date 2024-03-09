/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:06:17 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/09 11:45:40 by bbresil          ###   ########.fr       */
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
	if (getHitPoint() && getEnergyPoint())
	{
		std::cout << MAGENTA "ScavTrap " << this->getName()
		<< " prepares an attack on " << target << ", it would have caused " << getAttackDamage()
		<< " points of damage!" RESET << std::endl;
		setEnergyPoints(getEnergyPoint() - 1);
		std::cout << RED << getName() << " loses 1 energy point" RESET
		<< std::endl;
	}
	else
	{
		std::cout << MAGENTA << "ScavTrap " << getName() << "cannot attack: " << std::endl;
		if (getHitPoint() == 0)
			std::cout << "it has no hit points" RESET << std::endl;
		else
			std::cout << "it has no energy points" RESET << std::endl;
	}
}
void ScavTrap::guardGate(void)
{
	std::cout << GREEN "ScavTrap " << this->getName()
	<< " is now in Gate keeper mode" RESET << std::endl;
}

void ScavTrap::attack(ClapTrap& target)
{
	if (getHitPoint() && getEnergyPoint())
	{
		unsigned int damage = this->getAttackDamage();
		std::cout << YELLOW "ScavTrap " << getName() << " attacks " << target.getName()
		<< ", it caused " << damage << " hit points of damage!" RESET << std::endl;
		target.takeDamage(damage);
		std::cout << RED << getName() << " loses 1 energy point" RESET << std::endl;
		setEnergyPoints(getEnergyPoint() - 1);
	}
	else
	{
		std::cout << "ScavTrap " << getName() << "cannot attack: " << std::endl;
		if (getHitPoint() == 0)
			std::cout << "it has no hit points";
		else if (getEnergyPoint() == 0)
			std::cout << "it has no energy points";
		std::cout << std::endl;
	}
}
