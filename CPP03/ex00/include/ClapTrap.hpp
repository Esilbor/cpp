/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:12:38 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/23 22:46:40 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_
#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoint;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	void	setHitPoint(unsigned int nb);
	void	setEnergyPoint(unsigned int nb);
	ClapTrap& getClapTrap(std::string& name);
	unsigned int	getHitPoint();
	unsigned int getEnergyPoint();
	unsigned int getAttackDamage();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif