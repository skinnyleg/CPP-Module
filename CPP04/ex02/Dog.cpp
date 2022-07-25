/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:49:54 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 15:16:19 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->attribute = new Brain();
	this->type = "Dog";
}

Dog::Dog(Dog& obj) : Animal(obj)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->attribute = new Brain();
	*this = obj;
}

Dog::~Dog()
{
	delete attribute;
	std::cout << "Dog Default Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy Assignement Operator called" << std::endl;
	if (this != &obj)
		*(attribute) = *(obj.attribute);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "bark bark bark" << std::endl;
}

Brain*	Dog::getAttribute(void) const
{
	return (attribute);
}

void	Dog::	setBrainIdea(std::string str)
{
	attribute->ideas[attribute->i] = str;
	attribute->i++;
}

std::string	Dog::	getBrainIdea(int a) const
{
	if (a >= attribute->i)
		std::cout << "no availabe Idea with the index " << a << std::endl;
	return (attribute->ideas[a]);
}
