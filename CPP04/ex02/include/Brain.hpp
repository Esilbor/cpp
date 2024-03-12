/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:08:00 by bbresil           #+#    #+#             */
/*   Updated: 2024/03/11 19:33:16 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "AAnimal.hpp"


class Brain
{
private:
	std::string _ideas[100];
public:

	Brain();
	Brain(const Brain& otherBrain);
	Brain& operator=(const Brain& BrainB);
	~Brain();
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;


};

#endif
