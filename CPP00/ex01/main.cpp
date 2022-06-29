/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:34:33 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/29 15:38:58 by hmoubal          ###   ########.fr       */
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
	while (1)
	{
		std::cout << "Enter a command : ";
		std::cin >> input;
		if (!input.compare("ADD"))
			contact_info(PhoneBook, &i);
		else if (!input.compare("SEARCH"))
		{
			print_contact(PhoneBook, i);
		}
		else if(!input.compare("EXIT") || input.empty() == true)
		{
			if (input.empty() == true)
				std::cout << "\n";
			break ;
		}
		else
			std::cout << "no such command found" << std::endl;
	}
	return (0);
}

