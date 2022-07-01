/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:45:40 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/01 18:25:35 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *specimen;
	specimen = zombieHorde(5, "haitam");
	int i = 0;
	while (i < 5)
	{
		specimen[i].announce();
		i++;
	}
	delete[] specimen;
	return (0);
}
