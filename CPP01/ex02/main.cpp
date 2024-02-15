/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:02:27 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/15 15:18:24 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string* stringPTR = &var;
	std::string& stringREF = var;

	std::cout << "string address:		" << &var << std::endl;
	std::cout << "stringPTR address:	" << stringPTR << std::endl;
	std::cout << "stringREF address:	" << &stringREF << std::endl << std::endl;
	std::cout << "string value: 		" << var << std::endl;
	std::cout << "stringPTR value		" << *stringPTR << std::endl;
	std::cout << "stringREF value		" << stringREF << std::endl;
	return (0);
}