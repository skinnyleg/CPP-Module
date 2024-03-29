/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:34:33 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 00:14:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void){};

Contact::~Contact(void) {};

PhoneBook::PhoneBook(void){};

PhoneBook::~PhoneBook(void){};

int	main(void)
{
	std::string input;
	PhoneBook PhoneBook;
	int	i;

	i = 0;
	indexing_contact(PhoneBook);
	while (1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
		{
			std::cout << "\n";
			return (1);
		}
		if (!input.compare("ADD"))
		{
			if (contact_info(&PhoneBook, &i) == 1)
				return (1);
		}
		else if (!input.compare("SEARCH"))
		{
			if (print_contact(PhoneBook, i) == 1)
				return (1);
		}
		else if(!input.compare("EXIT"))
			return (1);
		else
			std::cout << "no such command found" << std::endl;
	}
	return (0);
}

