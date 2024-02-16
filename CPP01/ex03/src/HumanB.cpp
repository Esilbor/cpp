/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:15:14 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/16 21:00:10 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB() : arms(NULL)
{
}
HumanB::HumanB(std::string blaze) : name(blaze), arms(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (arms)
		std::cout << name << " attacks with their " << arms->getType() << std::endl;
	else
		std::cout << name << " has no arms to attack with"  << std::endl;
		
}

void HumanB::setWeapon(Weapon& gun)
{
	arms = &gun;
	
}
