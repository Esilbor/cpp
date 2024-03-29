/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:01:57 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/05 15:10:06 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

//constructeur par defaut
Fixed::Fixed(/* args */) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//constructeur de recopie
Fixed::Fixed(const Fixed& fixed) /* : _value(fixed._value) */
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

// convert an int into a fixed-point number
Fixed::Fixed(const int nb) : _value(nb << _bits)
{
	std::cout << "Int constructor called" << std::endl;

}

//check for NaN +inf and -inf as in IEEE754 norm
// convert a float into a fixed-point number
// multiply float nb by 2^_bits (2^8 = 256)
// round the result and cast to an int
Fixed::Fixed(const float nb)
{
	unsigned int bin;
	memcpy(&bin, &nb, sizeof(nb));
	std::cout << "Float constructor called" << std::endl;
	if (nb != nb)
	{
		std::cout << "NaN detected" << std::endl;
		_value = 0;
	}
	else if (bin == POSINF)
	{
		std::cout << "+inf detected" << std::endl;
		_value = INT_MAX; // Handle positive infinity
	}
	else if (bin == NEGINF)
	{
		std::cout << "-inf detected" << std::endl;
		_value = INT_MIN; // Handle negative infinity
	}
	else
		_value = static_cast<int>(roundf(nb * (1 << _bits)));
}

// operateur d'affectation
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

//destructeur
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

int	Fixed::getRawBits (void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

// return a float from a fixed-point value
float Fixed::toFloat (void) const
{
	return ((float)(_value) / (float)(1 << _bits));
}


// convert fixed_point nb to an int
int Fixed::toInt (void) const
{
	return (_value >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
