/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:31:07 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/16 15:41:22 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice& otherIce);
	Ice& operator=(const Ice& iceB);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};



#endif
