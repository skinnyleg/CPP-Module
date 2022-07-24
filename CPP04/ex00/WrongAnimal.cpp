/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:37:26 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/24 19:15:27 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	type = "who am i?";
}

WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = obj.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Copy Assignement Operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string str)
{
	this->type = str;
}

void	WrongAnimal::makeSound(void) const{};
