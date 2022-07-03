/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:54:27 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 18:58:59 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << name << " attacks with their ";
	std::cout << WeaponType->getType() << std::endl;
}

HumanB::HumanB(std::string aname, Weapon Type)
{
	name = aname;
	WeaponType = &Type;

}
HumanB::HumanB(std::string aname)
{
	name = aname;
	WeaponType = NULL;
}
HumanB::~HumanB(){};

void HumanB::setWeapon(Weapon &Type)
{
	std::string name = Type.getType();
	WeaponType = &Type;
}
