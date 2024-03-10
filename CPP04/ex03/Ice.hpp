/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:31:07 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/10 14:04:58 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
private:
	/*args*/
public:
	Ice();
	~Ice();
	Ice(const Ice& otherIce);
	Ice& operator=(const Ice& iceB);
	Ice& clone();
};



#endif
