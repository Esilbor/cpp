/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:08:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/15 17:23:53 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"


MateriaSource::MateriaSource() : _i(0)
{
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_spellbook[_i] = 0)
	{
		_spellbook[_i] = m;
		this->_i = (_i + 1) % 4;
		std::cout << MAGENTA "the Materia " << m->getType()
		<< "has been added to the speelbook!" RESET << std::endl;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{

}
