/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:51:17 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 16:57:53 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanA
{
	private:
	std::string name;
	Weapon& WeaponType;
	public:
	void attack(void);
	HumanA(std::string name, Weapon& WeaponType);
	~HumanA();
};

#endif
