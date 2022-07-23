/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:22:39 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 18:26:19 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& obj)
{
	*this = obj;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str, 100, 100, 30)
{
	std::cout << "FragTrap Name Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	ClapTrap::operator=(obj);
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->HP > 0)
	{
		if (this->EN > 0)
		{
			std::cout << "FragTrap " << this->name;
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap give me a high five" << std::endl;
}
