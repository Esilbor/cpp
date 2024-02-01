/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:49:24 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/25 16:11:12 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/*
>> display the data on the standard output (the screen)
>> get the data from the standard input (the keyboard)
*/

int	main(void)
{
	char	buff[512];
	Sample	insta; // call the constructor Sample

	insta.foo = 42;
	std::cout << "insta.foo= " << insta.foo << std::endl;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	insta.bar();
	std::cout << "insta.foo = " << insta.foo << std::endl;
	return (0);
	// Once the function returns the destructor is called.
}
