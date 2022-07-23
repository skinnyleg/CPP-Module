/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:04:52 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 16:54:47 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap fighter1("Fighter#1");
	ScavTrap fighter2("Fighter#2");
	ScavTrap fighter4("Fighter#4");
	ScavTrap fighter3(fighter1);
	ScavTrap fighter5;
	fighter5 = fighter4;

	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	fighter1.attack("Enemy#1");
	fighter1.takeDamage(110);
	fighter1.beRepaired(5);
	fighter1.guardGate();

	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;

	fighter2.attack("Enemy#2");
	fighter2.takeDamage(4);
	fighter2.beRepaired(2);
	fighter2.takeDamage(8);
	fighter2.guardGate();

	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	fighter3.attack("Enemy#3");
	fighter3.takeDamage(9);
	fighter3.beRepaired(3);
	fighter3.guardGate();

	std::cout << std::endl;

	return 0;
}
