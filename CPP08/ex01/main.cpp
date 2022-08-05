/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:04:49 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/05 16:24:35 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "Error : Size" << std::endl;
	{
		try
		{
			Span sp = Span(-1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	std::cout << "Normal cases" << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Span sp2(6);
			sp2.addNumber(9);
			sp2.addNumber(6);
			sp2.addNumber(3);
			sp2.addNumber(17);
			sp2.addNumber(11);
			Span sp(sp2);
			sp.print_all();
			std::cout << "Shortest Span is" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span is" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Span sp = Span(5);
			Span sp2(6);
			sp2.addNumber(9);
			sp2.addNumber(6);
			sp2.addNumber(3);
			sp2.addNumber(17);
			sp2.addNumber(11);
			sp = sp2;
			sp.print_all();
			std::cout << "Shortest Span is" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span is" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}



	std::cout << std::endl;
	std::cout << "Error : Container is Full" << std::endl;
	std::cout << std::endl;


	{
		Span sp = Span(5);
		try
		{
			sp.addNumber(9);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(11);
			sp.addNumber(12);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}


	std::cout << std::endl;
	std::cout << "Error : Span not found" << std::endl;
	std::cout << std::endl;



	{
		Span sp = Span(1);
		try
		{
			sp.addNumber(9);
			std::cout << "Shortest Span is" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "Longest Span is" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl;
	std::cout << "Range of iterators" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			std::vector<int> sp;
			srand(time(NULL));
			for(int i = 0 ; i < 1000000; i++)
			{
				sp.push_back(rand());
			}
			Span sp2(1000000);
			iter it_first = sp.begin();
			iter it_last = sp.end();
			sp2.fill_range(it_first, it_last);
			std::cout << "Shortest Span is" << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << "Longest Span is" << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
