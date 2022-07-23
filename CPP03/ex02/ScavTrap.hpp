/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:06:02 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/23 16:00:25 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap& obj);
		ScavTrap(std::string str);
		~ScavTrap();
		ScavTrap&	operator=(const ScavTrap& obj);
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
