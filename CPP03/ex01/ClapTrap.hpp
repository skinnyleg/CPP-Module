/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:27:21 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 16:54:13 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int HP;
		int EN;
		int AD;
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap&	operator=(const ClapTrap& obj);
		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(int HP, int EN, int AD);
		ClapTrap(std::string str, int HP, int EN, int AD);
		ClapTrap(ClapTrap& obj);
		~ClapTrap();
};


#endif
