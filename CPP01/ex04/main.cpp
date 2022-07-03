/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:21:05 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 21:00:12 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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
	FileName.append(".replace");
	RepFile.open(FileName);
	if (!RepFile.is_open())
	{
		std::cout << "couldn't create" << std::endl;
		return (1);
	}
	std::string line;
	std::string send;
	while (std::getline(OriginFile, line))
	{
		if (OriginFile.bad() == true)
		{
			std::cout << "Error while reading" << std::endl;
			return (1);
		}
		send.assign(line, 0, 5);
		send.append(" ");
		send.append(av[3]);
		RepFile << send << std::endl;
		if (RepFile.bad() == true)
		{
			std::cout << "Error while writing" << std::endl;
			return (1);
		}
	}
	OriginFile.close();
	RepFile.close();
}
