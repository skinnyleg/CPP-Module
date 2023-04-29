/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:45:13 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/29 16:38:02 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac <= 1)
			throw(std::runtime_error("Not Enough Arguments"));
		PmergeMe obj(av, ac);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
