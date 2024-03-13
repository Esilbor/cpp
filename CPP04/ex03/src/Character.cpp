/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:46:32 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/13 19:49:45 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character()
{
	i = 0;
	std::cout << GREEN "Default Character constructor called" RESET << std::endl;

}

Character::~Character()
{
	std::cout << GREEN "Default Character destructor called" RESET << std::endl;

}

Character& Character::operator=(const Character& otherCharacter)
{
	if (this != &otherCharacter)
	{
		this->name = otherCharacter.name;
		for (int i = 0; i < 4; i++)
			inventory[i] = otherCharacter.inventory[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	inventory[i] = m;
	this->i = (i + 1) % 4;
}

void Character::unequip(int idx)
{
	inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{

}
