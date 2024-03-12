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
#define SPEAKER 1

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

class ClapTrap
{
protected:
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

	unsigned int	getHitPoint() const;
	unsigned int	getEnergyPoint() const;
	unsigned int 	getAttackDamage() const;
	std::string		getName() const;
	void attack(const std::string& target);
	void attack(ClapTrap& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRepaired(ClapTrap& buddy, unsigned int amount);
	void verbose() const;
};

#endif
