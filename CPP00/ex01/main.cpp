/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:34:33 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/28 22:26:09 by skinnyleg        ###   ########.fr       */
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
			std::getline(std::cin, new_contact.phone_number);
			PhoneBook.add_contact(new_contact, i);
			i++;
		}
		else if (!input.compare("SEARCH"))
		{
			int j = 0;
			while (j < i)
			{
				std::cout << j << " | " << PhoneBook.contacts[j].first_name << " | " << PhoneBook.contacts[j].last_name << " | " << PhoneBook.contacts[j].nickname << std::endl;
				j++;
			}
		}
		else if(!input.compare("EXIT") || input.empty() == true)
			break ;
		else
			std::cout << "no such command found" << std::endl;
		if (i >= 8)
			i = 0;
	}
}

