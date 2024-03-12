/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:29:56 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 19:30:12 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAANIMAL_HPP_
#define AAANIMAL_HPP_

#include <iostream>
#include <string>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& otherAnimal);
	AAnimal& operator=(const AAnimal& animalB);
	virtual ~AAnimal();
	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const = 0;
protected:
	std::string type;
};

#endif
