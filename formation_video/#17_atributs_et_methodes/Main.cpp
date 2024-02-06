/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:24:36 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/02 16:44:21 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Window.hpp"
#include <iostream>

int main()
{
	// Window app{};
	Window newapp("Mon programme GUI", 640, 480);
	newapp.run();
	return (0);
}
