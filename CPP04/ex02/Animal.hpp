/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:31:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 16:25:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal& obj);
		virtual ~Animal();
		Animal& operator=(const Animal& obj);
		virtual void	makeSound(void) const = 0;
		std::string getType(void) const;
		void	setType(std::string str);
};

#endif
