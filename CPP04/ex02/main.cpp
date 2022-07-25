/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:29:57 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 16:30:22 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	((Dog*)dog)->setBrainIdea("food!!!love!!!");
	((Dog*)dog)->setBrainIdea("play!!!fun!!!");
	((Dog*)dog)->setBrainIdea("love me!!!");
	((Dog*)dog)->setBrainIdea("");

	((Cat*)cat)->setBrainIdea("not bad");
	((Cat*)cat)->setBrainIdea("good");
	((Cat*)cat)->setBrainIdea("hmm...");
	((Cat*)cat)->setBrainIdea("don't touch me");

	unsigned int amount = 4;
	Animal*	animals[amount];
	int i;

	std::cout << "\n ============= Copy [Dog] ! ============= \n\n";

	for (i = 0; i < ((int)amount / 2); i++)
		animals[i] = new Dog(*(Dog*)dog);

	std::cout << "\n =============  Copy [Cat] ! ============= \n\n";

	for (; i < (int)amount; i++)
		animals[i] = new Cat(*(Cat*)cat);

	std::cout << "\n ================= delete ================= \n\n";
	delete dog;
	delete cat;

	std::cout << "\n =============== DEEP COPY ================ \n\n";
	for(; --i >= 0;)
	{
		if (i < ((int)amount / 2))
		{
			std::cout << animals[i]->getType() << " : " ;
			std::cout << ((Dog*)animals[i])->getBrainIdea(i) << std::endl;
		}
		else
		{
			std::cout << animals[i]->getType() << " : " ;
			std::cout << ((Cat *)animals[i])->getBrainIdea(i) << std::endl;
		}
	}
	std::cout << "\n ================= Bye Bye ================= \n\n";
	for(; ++i < (int)amount;)
		delete animals[i];

	return 0;
}
