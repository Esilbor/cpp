/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:54:52 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 19:32:50 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal() : type("Prototype")
{
	std::cout << "Default AAnimal constructor has been called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& otherAnimal) : type(otherAnimal.type)
{
	// *this = otherAAnimal;
	std::cout << "AAnimal copy constructor has been performed from " << otherAnimal.getType()
	<< std::endl;

}

AAnimal& AAnimal::operator =(const AAnimal& animalB)
{
	if (this != &animalB)
		this->type = animalB.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << this->getType() << " destructor has been called" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}

void	AAnimal::makeSound() const
{
	std::cout << "Generic Animals make white noise" << std::endl;
}

