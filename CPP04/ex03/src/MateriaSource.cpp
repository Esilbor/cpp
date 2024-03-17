/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:08:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/17 14:59:01 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"


MateriaSource::MateriaSource() : _i(0)
{
	for (int i = 0; i < 4; i++)
	{
		_spellbook[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
		for (int i = 0; i < 4; i++)
	{
		delete (_spellbook[i]);
		_spellbook[i] = 0;
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == 0)
		return;
	if (_spellbook[_i] != 0)
	{
		delete (_spellbook[_i]);
	}
		_spellbook[_i] = m;
		this->_i = (_i + 1) % 4;
		std::cout << MAGENTA "the Materia " << m->getType()
		<< " has been added to the speelbook!" RESET << std::endl;

}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria* tmp = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_spellbook[i] && this->_spellbook[i]->getType() == type)
		{
			tmp = _spellbook[i]->clone();
		}
	}
	return (tmp);
}
