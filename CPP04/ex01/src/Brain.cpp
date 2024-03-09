/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:20:19 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/09 17:12:15 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor has been called" << std::endl;
}

Brain::Brain(const Brain& otherBrain)
{
	*this = otherBrain;
	std::cout << "Brain copy constructor has been called" << std::endl;

}

Brain& Brain::operator =(const Brain& brainB)
{
	if (this != &brainB)
	{
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = brainB._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;

}
std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return ("");

}
