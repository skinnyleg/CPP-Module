/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:23:29 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/04 14:34:49 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(void)
{
	std::cout << "///////testing with vectors///////" << std::endl;
	std::vector<int> vec;
	std::cout << "size before insertion " << vec.size() << std::endl;
	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(15);
	vec.push_back(20);
	vec.push_back(25);
	std::cout << "size after insertion " << vec.size() << std::endl;
	std::vector<int>::iterator it_vec = vec.begin();
	for(; it_vec != vec.end(); it_vec++)
	{
		std::cout << "vec values ";
		std::cout << *it_vec << std::endl;
	}
	std::cout << "testing num in the vector " << 20 << std::endl;
	easyfind(vec, 20);
	std::cout << "testing num not in the vector " << 200 << std::endl;
	easyfind(vec, 200);

	std::cout << std::endl;

	std::cout << "///////testing with list///////" << std::endl;
	std::list<int> list;
	std::cout << "size before insertion " << list.size() << std::endl;
	list.push_back(5);
	list.push_back(10);
	list.push_back(15);
	list.push_back(20);
	list.push_back(25);
	std::cout << "size after insertion  " << list.size() << std::endl;
	std::list<int>::iterator it_list = list.begin();
	for(; it_list != list.end(); it_list++)
	{
		std::cout << "list values ";
		std::cout << *it_list << std::endl;
	}
	std::cout << "testing num in the lists " << 20 << std::endl;
	easyfind(list, 20);
	std::cout << "testing num not in the lists " << 200 << std::endl;
	easyfind(list, 200);
}
