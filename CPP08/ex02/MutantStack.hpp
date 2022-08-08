/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:29:55 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/08 11:29:51 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <deque>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() :MutantStack<T>::stack() {};
		MutantStack(const MutantStack& obj) : MutantStack<T>::stack(obj) {};
		MutantStack& operator=(const MutantStack& obj) {MutantStack<T>::stack::operator=(obj); return (*this);};
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator	begin() {return (this->c.begin());}
		iterator	end() {return (this->c.end());}
		~MutantStack() {};
};


#endif
