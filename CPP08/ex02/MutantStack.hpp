/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:29:55 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/06 16:12:23 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::stack<T> stack;
	public:
		// typedef MutantStack<T>::iterator iterator;
		MutantStack() {};
		MutantStack(const MutantStack& obj) {*this = obj;};
		MutantStack& operator=(const MutantStack& obj) {this->stack = obj.stack;};
		~MutantStack() {};
};


#endif
