/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:23:53 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/13 18:16:58 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

// Abstract classes cannot be instanciated
class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);

	AMateria();
	~AMateria();
	AMateria(const AMateria& otherMateria);
	AMateria& operator=(const AMateria& materiaB);

	std::string const & getType() const; // Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};



#endif
