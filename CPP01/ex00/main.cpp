/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:45:40 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/01 17:54:21 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *specimen;
	std::string names[5] = {"father", "mother", "sister", "brother", "infant"};
	specimen = newZombie(names[0]);
	specimen->announce();
	int i = 1;
	while (i < 5)
	{
		randomChump(names[i]);
		i++;
	}
	delete specimen;
	return (0);
}
