/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:23:29 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/03 22:06:47 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(void)
{
	std::vector<int> table;
	std::cout << "before " << table.size() << std::endl;
	table.push_back(5);
	table.push_back(10);
	table.push_back(15);
	table.push_back(20);
	table.push_back(25);
	std::cout << "after " << table.size() << std::endl;
	std::vector<int>::iterator it = table.begin();
	for(; it != table.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	easyfind(table, 20);
}
