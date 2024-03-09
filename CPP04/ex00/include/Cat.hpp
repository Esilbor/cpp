/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:42:14 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/08 17:36:09 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:

	Cat();
	Cat(const Cat& otherCat);
	Cat& operator=(const Cat& CatB);
	~Cat();
	void makeSound() const;
};

#endif
