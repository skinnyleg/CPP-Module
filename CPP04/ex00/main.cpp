/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:29:57 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 12:05:06 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	const Animal* meta = new(std::nothrow) Animal();
	if (meta == NULL)
	{
		std::cout << "malloc error" << std::endl;
		exit(1);
	}
	const Animal* dog = new(std::nothrow) Dog();
	if (dog == NULL)
	{
		std::cout << "malloc error" << std::endl;
		delete meta;
		exit(1);
	}
	const Animal* cat = new(std::nothrow) Cat();
	if (cat == NULL)
	{
		std::cout << "malloc error" << std::endl;
		delete meta;
		delete dog;
		exit(1);
	}

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete dog;
	delete cat;
	std::cout << "\n==================== [ Wrong Animal ] ====================\n\n" ;
	const WrongAnimal *wrong = new(std::nothrow) WrongCat();
	if (wrong == NULL)
	{
		std::cout << "malloc error" << std::endl;
		exit(1);
	}
	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();
	delete wrong;
	return (0);
}
