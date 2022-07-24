/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:37:26 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/24 19:15:17 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
	type = "who am i?";
}

Animal::Animal(Animal& obj)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = obj.type;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal Copy Assignement Operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string str)
{
	this->type = str;
}

void	Animal::makeSound(void) const{};
