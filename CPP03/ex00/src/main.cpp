/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:46:54 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 08:47:20 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
	ClapTrap Kanye("Kanye");
	ClapTrap West("West");
	ClapTrap Taylor("Taylor");
	ClapTrap Swift("Swift");

	Taylor.verbose();
	
	Taylor.setAttackDamage(5);
	
	Taylor.attack(Kanye);

	Taylor.verbose();

	West.beRepaired(Kanye, 25);

	return (0);
}