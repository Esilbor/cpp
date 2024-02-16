/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:12:07 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/16 18:08:39 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* arms;
	std::string name;
public:
	HumanB();
	HumanB(std::string blaze);
	~HumanB();
	void attack();
	void setWeapon(Weapon& gun);
};

#endif