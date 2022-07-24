/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:44:02 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/24 19:08:42 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& obj)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	this->type = obj.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat Copy Assignement Operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow meow meow" << std::endl;
}
