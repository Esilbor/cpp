/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:29:43 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/01 15:50:55 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


// dans une structure les donnees sont publiques
struct Product
{
	std::string	name;
	float		price;
	bool		available;
};


int	main()
{
	struct Product item{"pencil", 1.5f, true};

	std::cout << "Price of " << item.name << ": " << item.price << " euros" << std::endl;

	return (0);
}
