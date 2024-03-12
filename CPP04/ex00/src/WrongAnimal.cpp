/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:54:52 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 14:03:11 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Prototype")
{
	std::cout << RED "Default Wrong animal constructor has been called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& otherWrongAnimal)
{
	*this = otherWrongAnimal;
	std::cout << RED "Wrong Animal copy constructor has been performed from " RESET << otherWrongAnimal.getType()
	<< std::endl;

}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& wrongAnimalB)
{
	if (this != &wrongAnimalB)
		this->type = wrongAnimalB.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED "Wrong Animal destructor has been called" RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << RED "Generic Wrong animals make white noise" RESET << std::endl;
}

