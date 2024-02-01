/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:49:19 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/01 17:04:41 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point_Class.hpp"

/*
	Les trois points essentiels en POO sont:
	-	l'encapsulation
	-	l'heritage
	-	le polymorphisme
*/



int	main()
{
	Point	p{}; // appel au constructeur
	// Point	p2{p}; // appel au constructeur par copie
	p.i++;
	std::cout << "ici dans le main i vaut: " << p.i << std::endl;
	return (0); //la fin de la fonction marque l'appel du destructeur
}
