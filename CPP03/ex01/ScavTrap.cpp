/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:11:34 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 16:53:08 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& obj)
{
	*this = obj;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str, 100, 50, 20)
{
	std::cout << "ScavTrap Name Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	ClapTrap::operator=(obj);
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->HP > 0)
	{
		if (this->EN > 0)
		{
			std::cout << "ScavTrap " << this->name;
			std::cout << " attacks " << target;
			std::cout << " , causing " << this->AD;
			std::cout << " points of damage!" << std::endl;
			this->EN--;
		}
		else
			std::cout << "No Energy left" << std::endl;
	}
	else
	{
		this->HP = 0;
		return ;
	}
	std::cout << "current HP " << this->HP << " and current EN " << this->EN << std::endl;
}
