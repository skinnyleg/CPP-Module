/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:08:19 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 19:01:30 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : name(name), WeaponType(Weapon){};

HumanA::~HumanA(){};

void HumanA::attack(void)
{
	std::cout << name << " attacks with their ";
	std::cout << WeaponType.getType() << std::endl;
}

