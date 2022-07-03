/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:48:23 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 16:07:21 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	private:
	std::string type;
	public:
	std::string& getType();
	void	setType(std::string name);
	Weapon();
	Weapon(std::string name);
	~Weapon();
};
#endif
