/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:27 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 17:05:51 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout << "I am a " << j->getType() << std::endl;
std::cout << "I am a " << i->getType() << std::endl;
std::cout << "I am a " << k->getType() << std::endl;
i->makeSound(); //will output the cat sound!
k->makeSound(); //will output the Wrong animal sound!
j->makeSound();
meta->makeSound();
delete i;
i = 0;
delete j;
j = 0;
delete meta;
meta = 0;
delete k;
k = 0;
return 0;
}

/***********************************************/
/***********************************************/


//Wrong Cat main
// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const WrongAnimal* i = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the Wrong Animal sound!
// j->makeSound();
// meta->makeSound();
// delete meta;
// delete j;
// delete i;
// return 0;
// }
