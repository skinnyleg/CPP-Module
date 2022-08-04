/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:21:25 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/04 18:39:45 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>

class Span
{
	private:
		std::vector<int>	vec;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span&	operator=(const Span& obj);
		void	print_all(void);
		void	addNumber(int value);
		int	shortestSpan();
		int	longestSpan();
		~Span();

		class ContainerIsFullException : public std::exception
		{
			public:
			const char *what() const throw()
			{
				return ("Container Is Full");
			}
		};
		class NoSpanCanBeFoundException : public std::exception
		{
			public:
			const char *what() const throw()
			{
				return ("No Span Can Be Found");
			}
		};
};

#endif
