/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:11:33 by bbresil           #+#    #+#             */
/*   Updated: 2024/01/29 14:46:54 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype> // for toupper function

std::string toUpperCase(const std::string& str)
{
	std::string upperStr;
	for (size_t i(0); i < str.length(); ++i)
	{
		upperStr += std::toupper(str[i]);
	}
	return (upperStr);
}

int main(int argc, char** argv)
{
	int	i(1);
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string output;
		for (i; i < argc; ++i)
		{
			output = toUpperCase(argv[i]);
			if (i < argc - 1)
				std::cout << output << " ";
			else
				std::cout << output << std::endl;
		}
	}
	return (0);
}
