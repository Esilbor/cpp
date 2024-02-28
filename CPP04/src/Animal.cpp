/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:54:52 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/28 14:26:02 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : type("Prototype")
{
	std::cout << "Generic creation of a beast" << std::endl;
}

Animal::Animal(const Animal& otherAnimal)
{
	*this = otherAnimal;
	std::cout << "Beast has been referenced from" << otherAnimal.getType()
	<< std::endl;

}

Animal& Animal::operator =(const Animal& animalB)
{
	if (this != &animalB)
		this->type = animalB.type;
	return (*this);
}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound()
{
	std::cout << "Generic animals make white noise" << std::endl;
}

