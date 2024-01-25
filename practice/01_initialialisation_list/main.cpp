/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:49:24 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/25 17:08:58 by bbresil          ###   ########.fr       */
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
	Sample	insta('a', 42, 4.2f); // call the constructor Sample

	std::cout << "insta.a2= " << insta.a2 << std::endl;
	insta.a2 = 62;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	insta.bar();
	std::cout << "insta.a2 = " << insta.a2 << std::endl;
	return (0);
	// Once the function returns the destructor is called.
}
