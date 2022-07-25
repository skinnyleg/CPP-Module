/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:05:39 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 16:24:05 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	i = 0;
}

Brain::Brain(Brain& obj)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	std::cout << "Brain Copy Assignement Operator called" << std::endl;
	if (this != &obj)
	{
		int a = 0;
		for(;this->i < obj.i ;this->i++)
		{
			this->ideas[this->i] = obj.ideas[a];
			a++;
		}
	}
	return (*this);
}

