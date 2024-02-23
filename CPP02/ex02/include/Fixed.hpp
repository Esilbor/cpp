/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:09:42 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/23 14:55:45 by esilbor          ###   ########.fr       */
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
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed& fixed); // constructeur de recopie
	Fixed& operator=(const Fixed& other); // operateur d'affectation
	~Fixed(); // destructeur
	
	int getRawBits (void) const;
	void setRawBits(int const raw);
	float toFloat (void) const;
	int toInt (void) const;

	bool operator>(const Fixed& nb) const;
	bool operator<(const Fixed& nb) const;
	bool operator>=(const Fixed& nb) const;
	bool operator<=(const Fixed& nb) const;
	bool operator==(const Fixed& nb) const;
	bool operator!=(const Fixed& nb) const;
	
	Fixed operator+(const Fixed& nb) const;
	Fixed operator-(const Fixed& nb) const;
	Fixed operator*(const Fixed& nb) const;
	Fixed operator/(const Fixed& nb) const;

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed const& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed const& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif