/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:18:42 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 19:01:11 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};
Weapon::Weapon(std::string name)
{
	type = name;
}

Weapon::~Weapon(){};
std::string& Weapon::getType()
{
	std::string& aname = type;
	return (aname);
}
void	Weapon::setType(std::string name)
{
	type = name;
}
