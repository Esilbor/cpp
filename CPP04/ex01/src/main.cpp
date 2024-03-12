/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:27 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 17:56:56 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

// int main()
// {
// 	const int len = 10;
// 	Animal* animalArray[len];
// 	for (int i = 0; i < 5; i++)
// 		animalArray[i] = new Dog();
// 	for (int i = len / 2; i < len; i++)
// 		animalArray[i] = new Cat();
// 	for (int i = 0; i < len; i++)
// 		animalArray[i]->makeSound();
// 	for (int i = 0; i < len; i++)
// 	{
// 		delete animalArray[i];
// 		animalArray[i] = 0;
// 	}
// 	return 0;
// }


// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// return 0;
// }


//test deep copy functionality for cats
//when a cat is copied from another it gets its own brain
//so changing the original cat idea does not impact
//the ideas of the copied cat
int	main()
{
	Cat* catA = new Cat();
	Dog* dogA = new Dog();

	catA->setIdea(0, "drink milk from the baby bottle!");
	dogA->setIdea(0, "cuddle with my master and play with my toys!");

	Cat* catB = new Cat(*catA);
	Dog* dogB = new Dog(*dogA);

	catA->setIdea(0, "sleep all day, war all night");
	dogA->setIdea(0, "find a cat and chew it up");

	std::cout << "catA idea[0] = " << catA->getIdea(0) << std::endl;
	std::cout << "catA idea[10] = " << catA->getIdea(10) << std::endl;
	std::cout << "catB idea[0] = " << catB->getIdea(0) << std::endl;

	std::cout << "dogA idea[0] = " << dogA->getIdea(0) << std::endl;
	std::cout << "dogB idea[0] = " << dogB->getIdea(0) << std::endl;

	delete catA;
	delete dogA;

	std::cout << "catB idea[0] after deleting catA = " << catB->getIdea(0) << std::endl;

	delete catB;
	delete dogB;
}
