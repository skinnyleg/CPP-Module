/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:27:31 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 14:11:06 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){};

Base	*generate(void)
{
	Base	*ptr;
	srand(time(0));
	int a = rand();
	if (a % 3 == 0)
		ptr = new(std::nothrow) A;
	else if (a % 3 == 1)
		ptr = new(std::nothrow) B;
	else
		ptr = new(std::nothrow) C;
	return (ptr);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type is: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is: C" << std::endl;
	else
		std::cout << "No Available Type" << std::endl;
}

void	identify(Base& p)
{
	Base check;
	try
	{
		check = dynamic_cast<A&>(p);
		std::cout << "Type is: A" << std::endl;
	}
	catch(...)
	{
		try
		{
			check = dynamic_cast<B&>(p);
			std::cout << "Type is: B" << std::endl;
		}
		catch(...)
		{
			try
			{
				check = dynamic_cast<C&>(p);
				std::cout << "Type is: C" << std::endl;
			}
			catch(std::exception &e)
			{
				std::cout << "No Available Type ";
				std::cout << "because ";
				std::cout << e.what() << std::endl;
			}
		}
	}
}

