/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:58:28 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 00:14:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong Numbers Of Arguments" << std::endl;
		return (0);
	}
	Conversion obj(av[1]);
	obj.Convert();
}
