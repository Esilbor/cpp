/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:32:24 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 19:50:04 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);
};


#endif