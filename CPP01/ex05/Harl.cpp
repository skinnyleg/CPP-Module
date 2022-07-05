/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:36:32 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/05 21:19:01 by hmoubal          ###   ########.fr       */
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
		{
			(var.*ptr[i]) ();
			return ;
		}
	}
	if (i == 4)
		std::cout << "no complaining command found" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error message" << std::endl;
}

Harl::Harl(){};
Harl::~Harl(){};
