/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:44:55 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/12 11:41:09 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->setType("Wrong Cat");
	std::cout << "Wrong Cat constructor has been called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& otherWrongCat)
{
	*this = otherWrongCat;
	std::cout << this->getType() << " called Wrong Cat copy constructor from " << otherWrongCat.getType()
	<< std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCatB)
{
	if (this != &wrongCatB)
	{
		this->type = wrongCatB.type;
	}
	return (*this);
}


WrongCat::~WrongCat()
{
	std::cout << this->getType() << " destructor has been called" << std::endl;

}

void	WrongCat::makeSound() const
{
	std::cout << "Miaow miaow I'm a Wrong cat and I love everyone!" << std::endl;
}

