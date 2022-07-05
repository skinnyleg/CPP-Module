/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:36:32 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/05 21:40:16 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	Harl var;
	int i = 0;
	void (Harl::*ptr[4]) (void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string compare[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	for (i = 0; i < 4 ; i++)
	{
		if (level.compare(compare[i]) == 0)
			break ;
	}
	switch (i)
	{
		case 0:
			(var.*ptr[0])();
			break;
		case 1:
			(var.*ptr[1])();
			break;
		case 2:
			(var.*ptr[2])();
			break;
		case 3:
			(var.*ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "error message" << std::endl;
}

Harl::Harl(){};
Harl::~Harl(){};
