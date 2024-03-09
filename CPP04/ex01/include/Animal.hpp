 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:33:32 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/08 10:36:51 by bbresil          ###   ########.fr       */
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
	virtual ~Animal();
	// Declare base class destructor as `virtual` to ensure
	// derived class destructors are called, enabling proper
	// resource cleanup when objects are deleted via base class pointers.
	// This avoids resource leaks and undefined behavior.

	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const;
protected:
	std::string type;
};

#endif
