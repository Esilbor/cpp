/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:46:54 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/11 16:04:11 by bbresil          ###   ########.fr       */
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

// int	main()
// {
// 	FragTrap A("Bobo");
// 	FragTrap B(A);
// 	FragTrap C = A;
// 	A.verbose();
// 	B.verbose();
// 	C.verbose();
// 	return 0;
// }
