/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:22:09 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/13 19:25:38 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
private:
	std::string name;
	AMateria* inventory[4];
	int i;
public:
	Character();
	~Character();
	Character& operator=(const Character& otherCharacter);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
