/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:11:25 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 13:21:51 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	Base* var1 = new(std::nothrow) A;
	if (var1 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base* var2 = new(std::nothrow) B;
	if (var2 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base* var3 = new(std::nothrow) C;
	if (var3 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base* var4 = new(std::nothrow) Base;
	if (var4 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base	base;
	A		a;
	B		b;
	C		c;
	Base&	refA = a;
	Base&	refB = b;
	Base&	refC = c;
	Base&	refBase = base;

	std::cout << ">> test pointer cast <<\n";
	identify(var1);
	identify(var2);
	identify(var3);
	identify(var4);
	identify(&refB);

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";
	identify(refA);
	identify(refB);
	identify(refC);
	identify(refBase);
	identify(*var1);

	delete var1;
	delete var2;
	delete var3;
	delete var4;

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";

	Base*	random = generate();
	if (random == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}
	identify(random);

	delete random;

}
