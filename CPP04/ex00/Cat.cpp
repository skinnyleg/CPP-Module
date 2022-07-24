/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:44:02 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/24 15:53:35 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat& obj)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->type = obj.type;
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy Assignement Operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow meow meow" << std::endl;
}
