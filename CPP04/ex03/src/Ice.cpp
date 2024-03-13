/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:32:23 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/13 18:41:42 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << CYAN "Default Ice constructor called" RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << CYAN "Default Ice desstructor called" RESET << std::endl;
}

Ice::Ice(const Ice& otherIce)
{
	*this = otherIce;
}
Ice& Ice::operator=(const Ice& iceB)
{
	if (this != &iceB)
		this->type = iceB.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << BLUE "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
