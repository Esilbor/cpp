/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:26:58 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/28 12:39:53 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"


Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
Weapon::Weapon(std::string value) : type(value)
{
	if (value == "")
		setType("bare hands");
}

const std::string& Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string value)
{
	this->type = value;
}
