/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:27 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/08 17:51:15 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "I am a " << j->getType() << std::endl;
std::cout << "I am a " << i->getType() << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete i;
i = 0;
delete j;
j = 0;
delete meta;
meta = 0;
return 0;
}
