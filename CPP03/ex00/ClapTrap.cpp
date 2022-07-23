/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:37:10 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 15:03:39 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EN(10), AD(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->name = obj.name;
	this->HP = obj.HP;
	this->AD = obj.AD;
	this->EN = obj.EN;
}

ClapTrap::ClapTrap(std::string str) : HP(10), EN(10), AD(0)
{
	std::cout << "Name Constructor called" << std::endl;
	this->name = str;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->name = obj.name;
	this->HP = obj.HP;
	this->AD = obj.AD;
	this->EN = obj.EN;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->HP > 0)
	{
		if (this->EN > 0)
		{
			std::cout << "ClapTrap " << this->name;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP > 0)
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " got attacked";
		std::cout << " , causing " << amount;
		std::cout << " points of damage!" << std::endl;
		this->HP -= amount;
		if (this->HP < 0)
			this->HP = 0;
	}
	else
	{
		this->HP = 0;
		return ;
	}
	std::cout << "current HP " << this->HP << " and current EN " << this->EN << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP > 0)
	{
		if (this->EN > 0)
		{
			std::cout << "ClapTrap " << this->name;
			std::cout << " is healing ";
			std::cout << " by this amount " << amount << std::endl;
			this->HP += amount;
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

