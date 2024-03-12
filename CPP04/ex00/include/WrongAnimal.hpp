/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:46:22 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 14:02:29 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& otherWrongAnimal);
	WrongAnimal& operator=(const WrongAnimal& wrongAnimalB);
	~WrongAnimal();

	std::string getType() const;
	void setType(std::string type);
	void makeSound() const;
protected:
	std::string type;
};

#endif
