/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:01:57 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/21 22:41:05 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// constructeur de reopie
Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

// convert an int into a fixed-point number
Fixed::Fixed(const int nb) : _value(nb << _bits)
{
}
// convert a float into a fixed-point number
Fixed::Fixed(const float nb) : _value( static_cast<int>(nb * (1 << _bits)))
{
	
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
//constructeur par defaut
Fixed::Fixed(/* args */) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//destructeur
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

int	Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat (void) const
{
	return (static_cast<float>(_value));
}
int Fixed::toInt (void) const
{
	return (_value >> _bits);
}



std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	
}