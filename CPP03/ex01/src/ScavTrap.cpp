/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:06:17 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/11 16:26:15 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: default constructor called" << std::endl;
	_name = "Bot";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN "ScavTrap: " << name << " constructor called" RESET
	<< std::endl;

	this->_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << MAGENTA "ScavTrap: " << this->_name
	<< " Destructor called" RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << MAGENTA "ScavTrap " << _name
		<< " prepares an attack on " << target << ", it would have caused "
		<< _attackDamage << " points of damage!" RESET << std::endl;
		_energyPoints--;
		std::cout << RED << _name << " loses 1 energy point" RESET
		<< std::endl;
	}
	else
	{
		std::cout << MAGENTA << "ScavTrap " << _name << "cannot attack: " << std::endl;
		if (_hitPoints == 0)
			std::cout << "it has no hit points" RESET << std::endl;
		else
			std::cout << "it has no energy points" RESET << std::endl;
	}
}
void ScavTrap::guardGate(void)
{
	std::cout << GREEN "ScavTrap " << _name
	<< " is now in Gate keeper mode" RESET << std::endl;
}

void ScavTrap::attack(ClapTrap& target)
{
	if (_hitPoints && _energyPoints)
	{
		unsigned int damage = _attackDamage;
		std::cout << YELLOW "ScavTrap " << this->_name << " attacks " << target.getName()
		<< ", it caused " << damage << " hit points of damage!" RESET << std::endl;
		target.takeDamage(damage);
		std::cout << RED << _name << " loses 1 energy point" RESET << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << _name << "cannot attack: " << std::endl;
		if (_hitPoints == 0)
			std::cout << "it has no hit points";
		else if (_energyPoints == 0)
			std::cout << "it has no energy points";
		std::cout << std::endl;
	}
}
