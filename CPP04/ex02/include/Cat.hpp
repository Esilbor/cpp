/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:42:14 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/09 17:12:33 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;
public:

	Cat();
	Cat(const Cat& otherCat);
	Cat& operator=(const Cat& CatB);
	~Cat();
	void makeSound() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;

};

#endif
