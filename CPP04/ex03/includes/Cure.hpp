/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:38:03 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/13 18:38:34 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure& otherCure);
	Cure& operator=(const Cure& CureB);
	virtual AMateria* clone() const override;
	virtual void use(ICharacter& target) override;
};



#endif
