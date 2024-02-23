/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:46:58 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/23 22:48:33 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoints(10), _attackDamage (0)
{
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
	unsigned int damage = this->getAttackDamage();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}

/**********************************************/
/**********************************************/
/**********************************************/

void	ClapTrap::setHitPoint(unsigned int nb)
{
	_hitPoint = nb;
}

void	ClapTrap::setEnergyPoint(unsigned int nb)
{
	_energyPoints = nb;
}

unsigned int	ClapTrap::getHitPoint()
{
	return (_hitPoint);
}

unsigned int ClapTrap::getEnergyPoint()
{
	return (_energyPoints);
}
unsigned int ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}
