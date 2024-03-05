/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:09:42 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/05 14:58:17 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <string>
#include <limits>
#include <climits>
#include <cstring>
#include <cmath>

#define POSINF 0x7f800000
#define NEGINF 0xff800000

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed(); // constructeur par defaut
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed& fixed); // constructeur de recopie
	Fixed& operator=(const Fixed& other); // operateur d'affectation
	~Fixed(); // destructeur

	int getRawBits (void) const;
	void setRawBits(int const raw);
	float toFloat (void) const;
	int toInt (void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
