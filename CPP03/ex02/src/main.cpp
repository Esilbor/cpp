/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:46:54 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/29 12:38:08 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int main()
{
	ClapTrap Kanye("Kanye");
	ScavTrap West("West");
	FragTrap Taylor("Taylor");
	ScavTrap Swift("Swift");

	Taylor.verbose();
	Taylor.attack("Katy");
	Taylor.attack(Kanye);

	Taylor.verbose();
	Taylor.highFivesGuys();
	West.beRepaired(Kanye, 25);

	Swift.guardGate();

	return (0);
}
