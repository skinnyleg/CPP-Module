/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:33 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/26 14:36:39 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "< ---------------- 1st scoop --------------- >" << std::endl;
	try
	{
		Bureaucrat B("human0", -1);
		std::cout << B << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "< ---------------- 2nd scoop --------------- >" << std::endl;
	try
	{
		Bureaucrat B("human1", 155);
		std::cout << B << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "< ---------------- 3rd scoop --------------- >" << std::endl;
	try
	{
		Bureaucrat B("human2", 5);
		std::cout << B << std::endl;
		B.Promotion();
		std::cout << B << std::endl;
		B.Promotion();
		std::cout << B << std::endl;
		B.Promotion();
		std::cout << B << std::endl;
		B.Promotion();
		std::cout << B << std::endl;
		B.Promotion();
		std::cout << B << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "< ---------------- 4th scoop --------------- >" << std::endl;
	try
	{
		Bureaucrat B("human3", 146);
		std::cout << B << std::endl;
		B.Demotion();
		std::cout << B << std::endl;
		B.Demotion();
		std::cout << B << std::endl;
		B.Demotion();
		std::cout << B << std::endl;
		B.Demotion();
		std::cout << B << std::endl;
		B.Demotion();
		std::cout << B << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
