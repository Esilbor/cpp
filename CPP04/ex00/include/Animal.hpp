/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:33:32 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/28 18:28:04 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal& otherAnimal);
	Animal& operator=(const Animal& animalB);
	~Animal();

	std::string getType() const;
	void setType(std::string type);
	void makeSound();
protected:
	std::string type;
};

#endif
