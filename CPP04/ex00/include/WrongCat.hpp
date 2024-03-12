/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:42:14 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 13:17:37 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:

	WrongCat();
	WrongCat(const WrongCat& otherWrongCat);
	WrongCat& operator=(const WrongCat& WrongCatB);
	~WrongCat();
	void makeSound() const;
};

#endif
