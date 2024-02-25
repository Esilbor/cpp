/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:46:54 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 17:04:58 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
	ScavTrap Kanye("Kanye");
	ScavTrap West("West");
	ScavTrap Taylor("Taylor");
	ScavTrap Swift("Swift");

	Taylor.verbose();
	Taylor.attack("Katy");
	Taylor.attack(Kanye);

	Taylor.verbose();

	West.beRepaired(Kanye, 25);

	Swift.guardGate();

	return (0);
}