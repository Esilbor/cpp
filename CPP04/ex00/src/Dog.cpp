/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:48:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 13:23:19 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	std::cout << "Dog constructor has been called" << std::endl;
}
Dog::Dog(const Dog& otherDog)
{
	*this = otherDog;
	std::cout << this->getType() << " called Dog copy constructor from " << otherDog.getType()
	<< std::endl;
}

Dog& Dog::operator=(const Dog& dogB)
{
	if (this != &dogB)
	{
		this->type = dogB.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;

}

void	Dog::makeSound() const
{
	std::cout << "WOOOOF WOOOOOF I fucking hate cats!" << std::endl;
	// Animal::makeSound();
}
