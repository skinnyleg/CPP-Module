/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:44:02 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 18:21:33 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->attribute = new(std::nothrow) Brain();
	if (attribute == NULL)
	{
		std::cout << "malloc error" << std::endl;
		exit(1);
	}
	this->type = "Cat";
}

Cat::Cat(Cat& obj) : Animal(obj)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->attribute = new(std::nothrow) Brain();
	if (attribute == NULL)
	{
		std::cout << "malloc error" << std::endl;
		exit(1);
	}
	*this = obj;
}

Cat::~Cat()
{
	delete attribute;
	std::cout << "Cat Default Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy Assignement Operator called" << std::endl;
	if (this != &obj)
		*(this->attribute) = *(obj.attribute);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow meow meow" << std::endl;
}

Brain*	Cat::getAttribute(void) const
{
	return (attribute);
}

void	Cat::setBrainIdea(std::string str)
{
	attribute->ideas[attribute->i] = str;
	attribute->i++;
}

std::string	Cat::getBrainIdea(int a) const
{
	if (a >= attribute->i)
		std::cout << "no availabe Idea with the index " << a << std::endl;
	return (attribute->ideas[a]);
}
