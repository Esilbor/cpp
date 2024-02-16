/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:26:58 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/16 18:01:12 by esilbor          ###   ########.fr       */
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
}

const std::string& Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string value)
{
	this->type = value;
}