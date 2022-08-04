/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:27:17 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/04 18:39:39 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int N)
{
	std::cout << "Span Int Constructor called" << std::endl;
	vec.reserve(N);
}

Span::Span(const Span &obj)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	vec.resize(obj.vec.size());
	*this = obj;
}

Span::~Span()
{
	std::cout << "Span Default Destructor called" << std::endl;
}

Span&	Span::operator=(const Span& obj)
{
	std::cout << "Span Assignement Operator called" << std::endl;
	std::vector<int>::const_iterator it_obj = obj.vec.begin();
	if (this != &obj)
	{
		while(it_obj != obj.vec.end() && this->vec.size() < this->vec.capacity())
		{
			this->addNumber(*it_obj);
			it_obj++;
		}
	}
	return (*this);
}

void	Span::addNumber(const int value)
{
	if (vec.size() != vec.capacity())
		vec.push_back(value);
	else
		throw(ContainerIsFullException());
}

void	Span::print_all(void)
{
	std::vector<int>::iterator it = vec.begin();
	while (it != vec.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
}

int	Span::longestSpan()
{
	std::sort(vec.begin(), vec.end());
	std::vector<int>::iterator it_first = vec.begin();
	std::vector<int>::reverse_iterator it_last = vec.rbegin();
	return (*it_last - *it_first);
}

int	Span::shortestSpan()
{
	std::sort(vec.begin(), vec.end());
	std::vector<int>::iterator it_first = vec.begin();
	int count = (*(it_first + 1) - *(it_first));
	for(; it_first != vec.end() ; it_first++)
	{
		if ((it_first + 1) != vec.end())
		{
			if((*(it_first + 1) - *(it_first)) < count)
				count = (*(it_first + 1) - *(it_first));
		}
	}
	return (count);
}


