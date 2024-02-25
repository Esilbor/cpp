/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:06:17 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 20:00:48 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap: default constructor called" << std::endl;
	this->setName("FragBot");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << YELLOW "FragTrap: " << name << " constructor called" RESET << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << YELLOW "FragTrap: " << this->getName()
	<< " Destructor called" RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << this->getName() << " ✨ 👍 ✨ sent you a high five request! ✨ 👍 ✨" RESET << std::endl;
	// std::cout << YELLOW << this->getName() << " sent you a positive high five request!" RESET << std::endl;
}
