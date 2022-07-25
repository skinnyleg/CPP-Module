/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:48:37 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 14:07:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *attribute;
	public:
		Dog();
		Dog(Dog& obj);
		~Dog();
		Dog& operator=(const Dog& obj);
		void	makeSound(void) const;
		Brain*	getAttribute(void) const;
		void	setBrainIdea(std::string str);
		std::string	getBrainIdea(int a) const;
};

#endif

