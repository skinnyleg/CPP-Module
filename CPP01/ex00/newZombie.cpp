/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:37:51 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 11:54:43 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* specimen;

	specimen = new(std::nothrow) Zombie(name);
	if (specimen == NULL)
	{
		std::cout << "malloc error" << std::endl;
		exit(1);
	}
	return (specimen);
}
