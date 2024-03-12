/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:54:52 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 14:06:56 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : type("Prototype")
{
	std::cout << "Default animal constructor has been called" << std::endl;
}

Animal::Animal(const Animal& otherAnimal)
{
	*this = otherAnimal;
	std::cout << "Animal copy constructor has been performed from " << otherAnimal.getType()
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
	std::cout << "Animal destructor has been called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Generic animals make white noise" << std::endl;
}

