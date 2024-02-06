/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:24:26 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/06 11:04:19 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"
#include <iostream>
#include <string>

Window::Window()
{
}

Window::~Window()
{
	std::cout << "JE SUIS LE DESTRUCTEUR" << std::endl;
}

Window::Window(std::string nom, int largeur, int hauteur)
		: title(nom), width(largeur), height(hauteur)
{
	std::cout << "*** constructeur ***" << std::endl;
	std::cout << "nom : " << title << " largeur : " << largeur << " width : " << width << " hauteur : " << height << std::endl;
}

void Window::run() const
{
	std::cout << "*** Affichage de la methode ***" << std::endl;
}
