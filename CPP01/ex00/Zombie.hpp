/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:23:47 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/03 13:01:50 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
	std::string name;
	public:
	std::string get_name();
	void set_name(std::string str);
	void	announce(void);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

	Zombie *newZombie(std::string name);
	void randomChump(std::string name);

#endif
