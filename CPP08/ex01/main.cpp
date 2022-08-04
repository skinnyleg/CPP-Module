/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:04:49 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/04 18:39:49 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		Span sp2(6);
		sp2.addNumber(9);
		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(11);
		sp = sp2;
		sp.print_all();
		std::cout << "Longest Span ";
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span ";
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
