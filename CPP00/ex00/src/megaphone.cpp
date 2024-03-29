/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:26:47 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/29 10:30:15 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

void	megaphone(std::string str)
{
	for ( int i = 0; str[i]; i++)
	{
		std::cout << (char)std::toupper(str[i]);
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			megaphone(argv[i]);
			if (i < argc - 1 )
				std::cout << " ";
		}
		std::cout << std::endl;

	}
	return (0);
}
