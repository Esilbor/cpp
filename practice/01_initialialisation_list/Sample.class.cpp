/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:11:30 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/25 17:00:42 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(char c, int i, float fl) : a1(c), a2(i), a3(fl) // constructor
{
	std::cout << "Constructor called [start]" << std::endl;
	std::cout << "this->a1= " << this->a1 << std::endl;
	std::cout << "this->a2= " << this->a2 << std::endl;
	std::cout << "this->a3= " << this->a3 << std::endl;
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
