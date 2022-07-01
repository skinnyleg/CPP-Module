/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:23:47 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/01 18:21:25 by hmoubal          ###   ########.fr       */
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
	~Zombie();
};
Zombie* zombieHorde( int N, std::string name );

#endif
