/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:46:54 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/25 10:08:07 by esilbor          ###   ########.fr       */
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
	Taylor.attack("Katy");
	Taylor.attack(Kanye);

	Taylor.verbose();

	West.beRepaired(Kanye, 25);

	return (0);
}