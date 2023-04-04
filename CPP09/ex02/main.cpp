/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:45:13 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/04 02:39:41 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>li;
	li.push_back(5);
	li.push_back(100);
	li.push_back(9);
	li.push_back(8);
	li.push_back(66);
	li.push_back(2);
	// std::sort(li.begin(), li.end());
	li.sort();
	std::list<int>::iterator it = li.begin();
	std::list<int>::iterator itend = li.end();
	// std::list<int>::iterator itj;
	// it++;
	// for (; it != itend; it++)
	// {
	// 	int key = *it;
	// 	itj = it;
	// 	itj--;
	// 	while (itj != li.begin() && *itj > key)
	// 	{
	// 		int val = *itj;
	// 		itj++;
	// 		*itj = val;
	// 		itj--;
	// 		itj--;
	// 	}
	// 	if (itj == li.begin() && *itj > key)
	// 	{
	// 		int val = *itj;
	// 		itj++;
	// 		*itj = val;
	// 		itj--;
	// 		itj--;
	// 	}
	// 	itj++;
	// 	*itj = key;
	// }
	it = li.begin();
	for (; it != li.end(); it++)
	{
		std::cout << "number == " << *it << std::endl;
	}
}
