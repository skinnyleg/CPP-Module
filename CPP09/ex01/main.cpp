/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:52:56 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/23 20:45:52 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{

	try
	{
        if (ac != 2)
            throw (std::runtime_error("Not Enough Arguments"));
		RPN obj(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
