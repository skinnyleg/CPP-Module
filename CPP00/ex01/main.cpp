/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:34:33 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/27 00:15:16 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook PhoneBook;
	int	i;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			Contact new_contact;
			std::cout << "Enter a first name :";
			std::getline(std::cin, new_contact.first_name);
			std::cout << "Enter a last name :";
			std::getline(std::cin, new_contact.last_name);
			std::cout << "Enter a nickname :";
			std::getline(std::cin, new_contact.nickname);
			std::cout << "Enter a darkest secret :";
			std::getline(std::cin, new_contact.darkest_secret);
			std::cout << "Enter a phone number :";
			std::cin >> new_contact.phone_number;
			PhoneBook.add_contact(new_contact, i);
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << "nothing coded yet" << std::endl;
		}
		else if(!input.compare("EXIT"))
			break ;
		else
			std::cout << "no such command found" << std::endl;
		i++;
		if (i >= 9)
			i = 0;
		// std::cout << "\n";
	}
}

