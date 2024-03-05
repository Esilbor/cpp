/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:46:34 by esilbor           #+#    #+#             */
/*   Updated: 2024/03/05 15:23:22 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// std::string	printBOOL(int k)
// {
// 	if (k)
// 		return ("TRUE");
// 	return ("FALSE");
// }

// int	main()
// {
// 	float c = 10.856265f;
// 	float d = 22.256265f;
// 	std::cout << "float c = " << c << std::endl;
// 	std::cout << "float d = " << d << std::endl;
// 	Fixed a(c);
// 	Fixed b(22.256f);

// 	std::cout << "A = " << a << std::endl;
// 	std::cout << "B = " << b << std::endl;
// 	Fixed e(a + b);
// 	std::cout << "E = " << e << std::endl;
// 	e = a - b;
// 	std::cout << "E = " << e << std::endl;
// 	e = a * b;
// 	std::cout << "E = " << e << std::endl;
// 	e = a / b;
// 	std::cout << "E = " << e << std::endl;
// 	std::cout << "A > B = " << printBOOL(a > b) << std::endl;
// 	std::cout << "A < B = " << printBOOL(a < b) << std::endl;
// 	std::cout << "A >= B = " << printBOOL(a >= b) << std::endl;
// 	std::cout << "A <= B = " << printBOOL(a <= b) << std::endl;
// 	std::cout << "A == B = " << printBOOL(a == b) << std::endl;
// 	std::cout << "A != B = " << printBOOL(a != b) << std::endl;

// 	std::cout << a << " as an int is: " << (a = a.toInt()) << std::endl;
// 	std::cout << "A = " << a << std::endl;
// 	std::cout << a << " as a float is: " << (a = a.toFloat()) << std::endl;
// 	std::cout << b << " as a float is: " << b.toFloat() << std::endl;

// 	return (0);
// }

// int	main()
// {
// 	Fixed a;
// 	float b = 2.2508754f;
// 	Fixed c(b);
// 	int d = 14;
// 	Fixed e(d);

// 	std::cout << "Fixed a= " << a << std::endl;
// 	std::cout << "float b= " << b << std::endl;
// 	std::cout << "int d= " << d << std::endl;
// 	std::cout << "(float to fixed point) Fixed c=" << c << std::endl;
// 	std::cout << "(int to fixed point) Fixed e=" << e << std::endl;
// 	return (0);
// }

// int	main(void)
// {
// 	float a = 2.4f;
// 	Fixed b = Fixed(a);
// 	std::cout << "Raw bits value of b = " << b.getRawBits() << std::endl;
// 	std::cout << "fixeb value of b from float = " << b << std::endl;
// 	std::cout << "b into an int = " << b.toInt() << std::endl;
// 	return (0);
// }

// float 2.4 is converted into a Fixed
// roundf(2.4 * 256) = 614 (raw value)
// Fixed Point value = 614 / 256 = 2.3984
