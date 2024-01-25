/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:06:16 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/25 16:11:45 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class	Sample
{
	public:
	
		int	foo;

		Sample(void); // constructor
		~Sample(void); // destructor

		void	bar(void); // function can be declared in C++ classes
};


/*
Classes must end with a ;

C++ uses the name of the class for the constructor
and the name of the classs after ~ for the destructor

in C++ constructors and destructors do not have return types
*/

#endif
