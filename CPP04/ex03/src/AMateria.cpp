/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:18:29 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/15 12:32:55 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria constructor has been called" << std::endl;
}

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor has been called" << std::endl;

}

AMateria::~AMateria()
{
	std::cout << "Default AMateria destructor has been called" << std::endl;
}

AMateria::AMateria(const AMateria& otherMateria) : type(otherMateria.type)
{
	std::cout << "AMateria copy constructor has been called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& materiaB)
{
	if (this != &materiaB)
		this->type = materiaB.type;
	return (*this);
}

// Returns the materia type
std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Default AMateria used on " << target.getName() << std::endl;
}
