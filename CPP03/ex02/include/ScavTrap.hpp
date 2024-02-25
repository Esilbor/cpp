/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 13:38:51 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 17:00:55 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &other);

	void attack(std::string const & target);
	void attack(ClapTrap& target);
	void guardGate(void);
};


#endif