/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:48:08 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/05 15:54:52 by bbresil          ###   ########.fr       */
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


Dog::~Dog()
{
	std::cout << "Dog " << this->getType() << " destructor has been called" << std::endl;

}

void	Dog::makeSound()
{
	std::cout << "WOOOOF WOOOOOF I fucking hate cats !" << std::endl;
}
