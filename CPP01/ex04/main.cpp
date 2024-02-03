/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:21:05 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 16:17:46 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	fill_file(std::ofstream &RepFile, std::ifstream &OriginFile, char **av)
{
	std::string line;
	std::string send;
	std::string rep = av[3];
	while (std::getline(OriginFile, line))
	{
		int found = 0;
		if (rep.compare("") != 0)
		{
			while (line.find(av[2], 0) != std::string::npos)
			{
				found = line.find(av[2], 0);
				send.assign(line, 0, found);
				send.append(rep);
				RepFile << send;
				line.erase(0, found + 1);
			}
		}
		if (line.empty() != true)
			RepFile << line;
		RepFile << "\n";
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "not enough args" << std::endl;
		return (1);
	}
	std::ofstream RepFile;
	std::ifstream OriginFile;
	std::string FileName;
	FileName = av[1];
	OriginFile.open(FileName);
	if (!OriginFile.is_open())
	{
		std::cout << "file doesn't exist" << std::endl;
		return (1);
	}
	if (OriginFile.peek() == EOF)
	{
		OriginFile.close();
		std::cout << "empty file" << std::endl;
		return (1);
	}
	FileName.append(".replace");
	RepFile.open(FileName);
	if (!RepFile.is_open())
	{
		OriginFile.close();
		std::cout << "couldn't create" << std::endl;
		return (1);
	}
	fill_file(RepFile, OriginFile, av);
	OriginFile.close();
	RepFile.close();
}
