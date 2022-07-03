/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:06:59 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 18:59:09 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanB
{
	public:
	Weapon *WeaponType;
	std::string name;
	void attack(void);
	HumanB(std::string aname);
	HumanB(std::string aname, Weapon Type);
	void	setWeapon(Weapon &Type);
	~HumanB();
};

#endif
