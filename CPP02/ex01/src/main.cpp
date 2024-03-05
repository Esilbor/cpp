/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:46:34 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/05 15:15:15 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

int main( void )
{
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

// int	main(void)
// {
// 	const float flo = 154.658f;
// 	Fixed a;
// 	Fixed const b (17);
// 	Fixed const c (10.0f / 3.0f);
// 	Fixed const d (flo);
// 	Fixed const e (0.0f / 0.0f); // NaN
// 	a.setRawBits(1054);
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "a to float is " << a << std::endl; // both values are similar since << calls toFloat()
// 	std::cout << "a to float 2 is " << a.toFloat() << std::endl;
// 	std::cout << "a to int is " << a.toInt() << std::endl;
// 	std::cout << "rawBits of a is " << a.getRawBits() << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "e is " << e << std::endl;
// 	return (0);
// }


// int main() {
// 	// Creating a NaN float value
// 	float nanValue = 0.0f / 0.0f;
// 	Fixed nanFixed(nanValue);

// 	std::cout << "-------------------------------" << std::endl;

// 	// Creating a positive infinity float value
// 	float posInfValue = std::numeric_limits<float>::infinity();
// 	Fixed posInfFixed(posInfValue);

// 	std::cout << "-------------------------------" << std::endl;

// 	// Creating a negative infinity float value
// 	float negInfValue = -std::numeric_limits<float>::infinity();
// 	Fixed negInfFixed(negInfValue);

// 	return 0;
// }



