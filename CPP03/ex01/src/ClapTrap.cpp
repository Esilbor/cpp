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
: _name("Bob"), _hitPoints(10), _energyPoints(10), _attackDamage (0)
{
	std::cout << CYAN "Default ClapTrap Bob has been created" RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage (0)
{
	std::cout << CYAN "ClapTrap " << this->getName() << " has been created" RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapCopy)
{
	*this = clapCopy; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapB)
{
	if (this != &clapB)
	{
		this->_name = clapB.getName();
		this->_hitPoints = clapB.getHitPoint();
		this->_energyPoints = clapB.getEnergyPoint();
		this->_attackDamage = clapB.getAttackDamage();
	}
	return (*this);
}


ClapTrap::~ClapTrap()
{
	std::cout << RED "ClapTrap " << this->getName() << " has been terminated!" RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints && _energyPoints)
	{
		unsigned int damage = this->getAttackDamage();
		std::cout << MAGENTA "ClapTrap " << _name << " fakes an attack on " << target
		<< ", it would have caused " << damage << " points of damage!" RESET << std::endl;
		std::cout << RED << _name << " loses 1 energy point" RESET << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << MAGENTA << "ClapTrap " << _name << "cannot attack: " << std::endl;
		if (_hitPoints == 0)
			std::cout << "it has no hit points" RESET << std::endl;
		else if (_energyPoints == 0)
			std::cout << "it has no energy points" RESET << std::endl;
	}
}
void ClapTrap::attack(ClapTrap& target)
{
	if (_hitPoints && _energyPoints)
	{
		unsigned int damage = this->getAttackDamage();
		std::cout << YELLOW "ClapTrap " << _name << " attacks " << target.getName()
		<< ", it caused " << damage << " hit points of damage!" RESET << std::endl;
		target.takeDamage(damage);
		std::cout << RED << _name << " loses 1 energy point" RESET << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << "cannot attack: " << std::endl;
		if (_hitPoints == 0)
			std::cout << "it has no hit points";
		else if (_energyPoints == 0)
			std::cout << "it has no energy points";
		std::cout << std::endl;
	}
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->getHitPoint())
		this->setHitPoints(0);
	else
	{
		unsigned int life = this->getHitPoint();
		unsigned int damage = life - amount;
		this->setHitPoints(damage);
	}
	this->verbose();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		unsigned int	newHitPoints = this->getHitPoint() + amount;
		if (newHitPoints > VALMAX)
		{
			this->setHitPoints(VALMAX);
			std::cout << _name << " repaired itself: " << "its hit points are full!" << std::endl;
		}
		else
		{
			std::cout << _name << " repaired itself: " << "it gained " << amount << " hit points!"
			<< std::endl;
			this->setHitPoints(this->getHitPoint() + amount);
		}
		std::cout << "it cost " << _name << " 1 energy point" << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << _name << " cannot repair itself as it has no energy left" << std::endl;
	}
}
void ClapTrap::beRepaired(ClapTrap& buddy, unsigned int amount)
{
	if (_energyPoints > 0)
	{
		unsigned int	newHitPoints = buddy.getHitPoint() + amount;
		if (newHitPoints > VALMAX)
		{
			buddy.setHitPoints(VALMAX);
			std::cout << GREEN << _name << " repaired " << buddy.getName() << ": its hit points are full!" RESET << std::endl;
		}
		else
		{
			std::cout << GREEN << _name << " repaired " << buddy.getName() << " it gained " << amount << " hit points!" RESET
			<< std::endl;
			buddy.setHitPoints(buddy.getHitPoint() + amount);
		}
		buddy.verbose();
		std::cout << RED "it cost " << _name << " 1 energy point" RESET << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << _name << " cannot repair " << buddy.getName() << ": it has no energy left" << std::endl;
	}
}

/**********************************************/
/**********************************************/
/**********************************************/

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoints(unsigned int nb)
{
	_hitPoints = nb;
}

void	ClapTrap::setEnergyPoints(unsigned int nb)
{
	_energyPoints = nb;
}
void	ClapTrap::setAttackDamage(unsigned int nb)
{
	_attackDamage = nb;
}
unsigned int	ClapTrap::getHitPoint() const
{
	return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoint() const
{
	return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

void	ClapTrap::verbose() const
{
	if (SPEAKER)
	{
		std::cout << std::endl;
		std::cout << CYAN "________________________________" << std::endl << std::endl;
		std::cout << _name << " hit points:    " << this->getHitPoint() << std::endl;
		std::cout << _name << " energy points: " << this->getEnergyPoint() << std::endl;
		std::cout << _name << " attack damage: " << this->getAttackDamage() << std::endl;
		std::cout << "________________________________" RESET << std::endl << std::endl;
	}

}