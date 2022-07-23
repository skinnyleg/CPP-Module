/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:04:52 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 18:24:57 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fighter1("Fighter#1");
	FragTrap fighter2("Fighter#2");
	FragTrap fighter3(fighter1);

	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	fighter1.attack("Enemy#1");
	fighter1.takeDamage(110);
	fighter1.beRepaired(5);
	fighter1.highFivesGuys();

	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;

	fighter2.attack("Enemy#2");
	fighter2.takeDamage(4);
	fighter2.beRepaired(2);
	fighter2.takeDamage(8);
	fighter2.highFivesGuys();

	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	fighter3.attack("Enemy#3");
	fighter3.takeDamage(9);
	fighter3.beRepaired(3);
	fighter3.highFivesGuys();

	std::cout << std::endl;

	return 0;
}

