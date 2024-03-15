/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:46:32 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/15 17:23:12 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character() : _i(0)
{
	std::cout << GREEN "Default Character constructor called" RESET << std::endl;
}

Character::Character(std::string name) : _name(name), _i(0)
{
	std::cout << GREEN "Default Character constructor called" RESET << std::endl;
}

Character::~Character()
{
		for (int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			_inventory[i] = 0;
		}
	std::cout << GREEN "Default Character destructor called" RESET << std::endl;

}

Character& Character::operator=(const Character& otherCharacter)
{
	if (this != &otherCharacter)
	{
		this->_name = otherCharacter._name;
		for (int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			_inventory[i] = otherCharacter._inventory[i];
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_inventory[_i] = 0)
	{
		_inventory[_i] = m;
		this->_i = (_i + 1) % 4;
		std::cout << MAGENTA "the Materia " << m->getType() << "has been added to "
		<< _name << "'s inventory!" RESET << std::endl;
	}
}

void Character::unequip(int idx)
{
	AMateria* tmp = _inventory[idx];
	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{

}
