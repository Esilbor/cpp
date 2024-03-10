/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:23:53 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/10 14:05:44 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	~AMateria();
	AMateria(const AMateria& otherMateria);
	AMateria& operator=(const AMateria& materiaB);

	AMateria(std::string const & type);

	std::string const & getType() const; // Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};



#endif
