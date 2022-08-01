/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:43:31 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/01 13:21:17 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	// Array<int> arr1(0);
	// Array<int> arr3(-5);
	Array<int> arr(5);
	try
	{
		for(int i = 0; i < 5; i++)
		{
			arr[i] = i;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> arr2(arr);
	Array<int> arr5;
	arr5 = arr;
	try
	{
		std::cout << arr2[0] << std::endl;
		std::cout << arr5[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
