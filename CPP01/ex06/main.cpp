/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:39:53 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/05 21:35:46 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl var;
	if (ac != 2)
	{
		std::cout << "WRONG NUMBER OF ARGS" << std::endl;
		return (1);
	}
	var.complain(av[1]);
	return (0);
}
