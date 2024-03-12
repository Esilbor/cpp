/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:06:17 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/11 16:22:12 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: default constructor called" << std::endl;
	this->_name = "FragBot";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << YELLOW "FragTrap: " << name << " constructor called" RESET << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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
}
