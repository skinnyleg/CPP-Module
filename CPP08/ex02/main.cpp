/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:59:16 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/08 11:38:44 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "///// TEST NUMBER 1 /////" << std::endl;
	std::cout << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "the number at the top of the stack " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size of stack " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << "the number at the top of the stack " << mstack.top() << std::endl;
		std::cout << "size of stack " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "stack values == " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "the number at the top of the second stack " << s.top() << std::endl;
		std::cout << "size of second stack " << s.size() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "///// TEST NUMBER 2 /////" << std::endl;
	std::cout << std::endl;

	{
		std::list<int> mslist;
		mslist.push_back(5);
		mslist.push_back(17);
		mslist.pop_back();
		std::cout << "the number at the back of the list " << mslist.back() << std::endl;
		std::cout << "size of list " << mslist.size() << std::endl;
		mslist.push_back(3);
		mslist.push_back(5);
		mslist.push_back(737);
		mslist.push_back(0);
		std::cout << "the number at the back of the list " << mslist.back() << std::endl;
		std::cout << "size of list " << mslist.size() << std::endl;
		std::list<int>::iterator it = mslist.begin();
		std::list<int>::iterator ite = mslist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "list values == " << *it << std::endl;
			++it;
		}
		std::list<int> s(mslist);
		std::cout << "size of second list " << s.size() << std::endl;
		std::cout << "the number at the back of the list " << s.back() << std::endl;
	}
	return 0;
}
