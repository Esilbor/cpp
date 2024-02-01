/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:15:26 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/01 16:58:56 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point_Class.hpp"
#include <iostream>

/*
**	definition du constructeur et destructeur
**
*/

Point::Point()
{
	std::cout << "Creation d'un point." << this << std::endl;
}

// Point::Point(const Point& p)
// {
// 	std::cout << "Creation d'un point par copie." << p.i << std::endl;
// }
Point::~Point()
{
	std::cout << "je suis le destructeur" << std::endl;
}
