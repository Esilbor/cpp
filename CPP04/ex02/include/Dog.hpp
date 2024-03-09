/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:56:14 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/09 17:57:38 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
public:

	Dog();
	Dog(const Dog& otherDog);
	Dog& operator=(const Dog& dogB);
	~Dog();
	void makeSound() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};

#endif
