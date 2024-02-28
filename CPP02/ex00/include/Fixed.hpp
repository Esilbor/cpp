/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:09:42 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/27 14:01:08 by bbresil          ###   ########.fr       */
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
	Fixed(const Fixed& fixed); // constructeur de recopie
	Fixed& operator=(const Fixed& other); // surcharge de l'operateur d'affectation
	~Fixed(); // destructeur
	int getRawBits (void) const;
	void setRawBits(int const raw);
};

#endif
