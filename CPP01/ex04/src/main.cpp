/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilbor <esilbor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 07:54:35 by esilbor           #+#    #+#             */
/*   Updated: 2024/02/19 16:25:37 by esilbor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please enter 3 params: <filename> s1 and s2" << std::endl;
		return (1);
	}
	std::ifstream reader;
	std::string infile = argv[1];
	std::string outfile = infile + ".replace";
	reader.open(infile.c_str());
	if (!reader.is_open())
	{
		std::cerr << "Could not open file" << std::endl;
		return (1);
	}
	std::string line;
	std::ofstream writer(outfile.c_str());
	if (!writer.is_open())
	{
		std::cerr << "Could not create outfile" << std::endl;
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1 == "")
	{
		std::cerr << "param 2 is not a valid string" << std::endl;
		return 1;
	}
	while (getline(reader, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		writer << line << std::endl;
	}
	reader.close();
	writer.close();
	return (0);
}
