/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:48:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/09 17:58:38 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_brain = new Brain();
	this->setType("Dog");
	std::cout << "Dog with a brain constructor has been called" << std::endl;
}
Dog::Dog(const Dog& otherDog) : Animal(otherDog), _brain(new Brain(*otherDog._brain))
{
	// *this = otherDog;
	std::cout << this->getType() << " called Dog with a brain copy constructor from " << otherDog.getType()
	<< std::endl;
}

Dog& Dog::operator=(const Dog& dogB)
{
	if (this != &dogB)
	{
		Animal::operator=(dogB);
		delete _brain;
		_brain = new Brain(*dogB._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << this->getType() << " with a brain destructor has been called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "WOOOOF WOOOOOF I fucking hate cats!" << std::endl;
}

void	Dog::setIdea(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}
std::string	Dog::getIdea(int index) const
{
	return (_brain->getIdea(index));

}
