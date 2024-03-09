/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:56:14 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/08 10:50:45 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:

	Dog();
	Dog(const Dog& otherDog);
	Dog& operator=(const Dog& dogB);
	~Dog();
	void makeSound() const;
};

#endif
