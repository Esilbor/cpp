/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:43:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/15 13:09:33 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"
#include "../includes/AMateria.hpp"

Cure::Cure()
{
	type = "cure";
	std::cout << GREEN "Default Cure constructor called" RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << GREEN "Default Cure desstructor called" RESET << std::endl;
}

Cure::Cure(const Cure& otherCure)
{
	*this = otherCure;
}
Cure& Cure::operator=(const Cure& CureB)
{
	if (this != &CureB)
		this->type = CureB.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << GREEN "* heals " << target.getName() << " wounds *" << std::endl;
}
