/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:43:31 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/31 18:11:31 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> arr(5);
	// for(int i = 0; i < 5; i++)
	// {
	// 	arr[i] = i;
	// }
	Array<int> arr2(arr);
	try
	{
		std::cout << arr2[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
