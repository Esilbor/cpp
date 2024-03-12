/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:44:55 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 17:03:53 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "Cat constructor has been called" << std::endl;
}
Cat::Cat(const Cat& otherCat)
{
	*this = otherCat;
	std::cout << this->getType() << " called Cat copy constructor from " << otherCat.getType()
	<< std::endl;
}

Cat& Cat::operator=(const Cat& CatB)
{
	if (this != &CatB)
	{
		this->type = CatB.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;

}

void	Cat::makeSound() const
{
	std::cout << "Miaow miaow I'm a cat and I hate everyone!" << std::endl;
}

