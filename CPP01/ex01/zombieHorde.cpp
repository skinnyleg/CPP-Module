/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:21:41 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 11:52:28 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *Zombies;

	Zombies = new(std::nothrow) Zombie[N];
	if (Zombies == NULL)
	{
		std::cout << "malloc error" << std::endl;
		exit(1);
	}
	int i = 0;

	while (i < N)
	{
		Zombies[i].set_name(name);
		i++;
	}
	return (Zombies);
}
