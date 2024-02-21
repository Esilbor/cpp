/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:09:42 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/21 18:11:54 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <string>

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed(); // constructeur par defaut
	Fixed(const int nb); // constructeur par defaut
	Fixed(const float nb); // constructeur par defaut
	Fixed(const Fixed& fixed); // constructeur de recopie
	Fixed& operator=(const Fixed& other); // operateur d'affectation
	~Fixed(); // destructeur
	int getRawBits (void) const;
	void setRawBits(int const raw);
	float toFloat (void) const;
	int toInt (void) const;
};

#endif