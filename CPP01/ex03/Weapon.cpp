/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:18:42 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/07 09:45:00 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	type = name;
}

Weapon::~Weapon(){};
std::string& Weapon::getType()
{
	std::string& name = type;
	return (name);
}
void	Weapon::setType(std::string name)
{
	type = name;
}
