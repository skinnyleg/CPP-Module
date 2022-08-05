/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:27:17 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/05 16:42:35 by hmoubal          ###   ########.fr       */
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
	int a = N;
	if (a <= 0)
		throw(SizeBiggerException());
	vec.reserve(N);
}

Span::Span(const Span &obj)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	vec.reserve(obj.vec.size());
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
	iter it = vec.begin();
	while (it != vec.end())
	{
		std::cout << "vec value == " << *it << std::endl;
		it++;
	}
}

int	Span::longestSpan()
{
	if (vec.size() <= 1)
		throw(NoSpanCanBeFoundException());
	iter it_first = vec.begin();
	iter it_last = vec.end();
	int a = *(std::max_element(it_first, it_last)) - *(std::min_element(it_first, it_last));
	return (a);
}

int	Span::shortestSpan()
{
	if (vec.size() <= 1)
		throw(NoSpanCanBeFoundException());
	iter it_first = vec.begin();
	std::vector<int>::reverse_iterator it_last = vec.rbegin();
	int count = *(it_first) - *(it_last);
	if (count < 0)
		count *= -1;
	for(; it_first != vec.end() ; it_first++)
	{
		if ((it_first + 1) != vec.end())
		{
			int tmp = *(it_first + 1) - *(it_first);
			if (tmp < 0)
				tmp *= -1;
			if(tmp < count)
				count = tmp;
		}
	}
	return (count);
}

void	Span::fill_range(iter it_first, iter it_last)
{
	if ((long)vec.capacity() < std::distance(it_first,it_last))
		throw(SizeTooBigException());
	vec.insert(vec.begin(), it_first, it_last);
}

