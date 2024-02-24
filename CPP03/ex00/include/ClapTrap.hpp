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

#define VALMAX 999

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& clapCopy);
	ClapTrap& operator=(const ClapTrap& clapB);
	ClapTrap(std::string name);
	~ClapTrap();

	void	setHitPoint(unsigned int nb);
	void	setEnergyPoint(unsigned int nb);
	ClapTrap& getClapTrap(std::string& name);
	unsigned int	getHitPoint() const;
	unsigned int getEnergyPoint() const;
	unsigned int getAttackDamage() const;
	std::string	getName() const;
	
	void attack(const std::string& target);
	void attack(ClapTrap& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRepaired(ClapTrap& buddy, unsigned int amount);
};

#endif