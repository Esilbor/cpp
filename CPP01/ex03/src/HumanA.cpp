/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:42:32 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/16 18:13:28 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string blaze, Weapon& armament) : name(blaze), arms(armament)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << arms.getType() << std::endl;
}