/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 21:03:15 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/24 22:00:44 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	repStr(const std::string& line, const std::string& s1, const std::string& s2)
{
	if (s1.empty())
		return line;

	std::string	res;
	size_t		pos = 0;
	size_t		found;

	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		res.append(line.substr(pos, found - pos));
		res.append(s2);
		pos = found + s1.length();
	}
	res.append(line.substr(pos));

	return res;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	//Check if s1 is not an empty string.
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty string." << std::endl;
	}

	//Open the input file.
	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cerr << "Error: cannot open the input file " << filename << std::endl;
		return 1;
	}

	//Create the output file.
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile)
	{
		std::cerr << "Error: cannot create the output file" << std::endl;
		return 1; 
	}

	//Read the file line by line.
	std::string	line;

	while (std::getline(inFile, line))
		outFile << repStr(line, s1, s2) << std::endl;

	inFile.close();
	outFile.close();
	return 0;
}