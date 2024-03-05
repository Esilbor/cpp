/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:01:57 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/05 14:59:27 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// constructeur de recopie
Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

// convert an int into a fixed-point number
Fixed::Fixed(const int nb) : _value(nb << _bits)
{
	// std::cout << "Int constructor called" << std::endl;

}

// convert a float into a fixed-point number:
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
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}
//constructeur par defaut
Fixed::Fixed(/* args */) : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

//destructeur
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;

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
	return (static_cast<float>(_value) / static_cast<float>(1 << _bits));
}

// convert fixed_point nb to an int
int Fixed::toInt (void) const
{
	return (_value >> _bits);
}

/**********************************************************/
/**********************************************************/
/**********************************************************/

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed& nb) const
{
	return (_value > nb._value);
}

bool Fixed::operator<(const Fixed& nb) const
{
	return (_value < nb._value);
}

bool Fixed::operator>=(const Fixed& nb) const
{
	return (_value >= nb._value);
}

bool Fixed::operator<=(const Fixed& nb) const
{
	return (_value <= nb._value);
}

bool Fixed::operator==(const Fixed& nb) const
{
	return (_value == nb._value);
}

bool Fixed::operator!=(const Fixed& nb) const
{
	return (_value != nb._value);
}

/**********************************************************/
/**********************************************************/
/**********************************************************/

// the constructor Fixed(const float nb) is called upon return

Fixed Fixed::operator+(const Fixed& nb) const
{
	return (Fixed(this->toFloat() + nb.toFloat()));
}

Fixed Fixed::operator-(const Fixed& nb) const
{
	return (Fixed(this->toFloat() - nb.toFloat()));
}

Fixed Fixed::operator*(const Fixed& nb) const
{
	return (Fixed(this->toFloat() * nb.toFloat()));
}

Fixed Fixed::operator/(const Fixed& nb) const
{
	return (Fixed(this->toFloat() / nb.toFloat()));
}

/**********************************************************/
/**********************************************************/
/**********************************************************/

// ternary conditional operator
// condition ? result_if_true : result_if_false;


Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}

Fixed const& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a > b) ? a : b);
}

Fixed const& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a > b) ? a : b);
}

/**********************************************************/
/**********************************************************/
/**********************************************************/

Fixed&	Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	_value--;
	return (*this);
}

// post-incrementation the value is first returned then incremented
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	_value++;
	return (tmp);
}

// post-decrementation the value is first returned then decremented
Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	_value--;
	return (tmp);
}
