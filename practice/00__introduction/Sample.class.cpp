/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:11:30 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/25 16:10:57 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) // constructor
{
	std::cout << "Constructor called [start]" << std::endl;
	std::cout << "this->foo= " << this->foo << std::endl;
	this->foo = 12;
	std::cout << "this->foo= " << this->foo << std::endl;
	this->bar();
	std::cout << "Constructor called [end]" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called [start]" << std::endl;
	std::cout << "Destructor called [end]" << std::endl;
	return ;
}

void	Sample::bar(void)
{
	std::cout << "This is real life!" << std::endl;
	return ;
}
