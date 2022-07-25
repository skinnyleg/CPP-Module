/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:42:33 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 14:07:04 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain *attribute;
	public :
		Cat();
		Cat(Cat& obj);
		~Cat();
		Cat& operator=(const Cat& obj);
		void	makeSound(void) const;
		Brain*	getAttribute(void) const;
		void	setBrainIdea(std::string str);
		std::string	getBrainIdea(int a) const;
};

#endif
