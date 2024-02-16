/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:15:14 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/16 18:18:24 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
}
HumanB::HumanB(std::string blaze) : name(blaze)
{
	
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << arms->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& gun)
{
	arms = &gun;
	
}
