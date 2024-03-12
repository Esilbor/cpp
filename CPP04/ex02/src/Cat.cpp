/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:44:55 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 19:42:21 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	_brain = new Brain();
	this->setType("Cat");
	std::cout << "Cat with a brain constructor has been called" << std::endl;
}
Cat::Cat(const Cat& otherCat) : AAnimal(otherCat), _brain(new Brain(*otherCat._brain))
{
	// *this = otherCat;
	std::cout << this->getType() << " called Cat with a brain copy constructor from "
	<< otherCat.getType() << std::endl;
}

Cat& Cat::operator=(const Cat& catB)
{
	if (this != &catB)
	{
		AAnimal::operator=(catB);
		delete _brain;
		_brain = new Brain(*catB._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << this->getType() << " with a brain destructor has been called"
	<< std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow miaow I'm a cat and I hate everyone!" << std::endl;
}

void	Cat::setIdea(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}
std::string	Cat::getIdea(int index) const
{
	return (_brain->getIdea(index));

}
