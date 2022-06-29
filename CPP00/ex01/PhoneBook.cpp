/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:27:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/06/29 18:49:14 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	contact_info(PhoneBook *PhoneBook, int *i)
{
	Contact new_contact;
	std::cout << "Enter a first name :";
	std::cin >> new_contact.first_name;
	if (new_contact.first_name.empty() == true)
		return (1);
	std::cout << "Enter a last name :";
	std::cin >> new_contact.last_name;
	if (new_contact.last_name.empty() == true)
		return (1);
	std::cout << "Enter a nickname :";
	std::cin >> new_contact.nickname;
	if (new_contact.nickname.empty() == true)
		return (1);
	std::cout << "Enter a darkest secret :";
	std::cin >> new_contact.darkest_secret;
	if (new_contact.darkest_secret.empty() == true)
		return (1);
	std::cout << "Enter a phone number :";
	std::cin >> new_contact.phone_number;
	if (new_contact.phone_number.empty() == true)
		return (1);
	PhoneBook->add_contact(new_contact, *i);
	(*i)++;
	return (0);
}

void	print_space_str(std::string str)
{
	int length;
	int k;

	k = 0;
	length = str.length();
	if (length > 10)
	{
		str = str.substr(0,9);
		std::cout << str << ".";
		return ;
	}
	while (k < 10 - length)
	{
		std::cout << " ";
		k++;
	}
	std::cout << str;
}

void	print_space(void)
{
	int k = 0;
	while (k < 9)
	{
		std::cout << " ";
		k++;
	}
}

void	print_all(PhoneBook PhoneBook, int i)
{
	int j = 0;
	int limit = 0;
	int k = 0;
	if (i >= 8)
		limit = 8;
	else
		limit = i;
	std::cout << "|     INDEX|     FIRST|      LAST|  NICKNAME|\n";
	while (j < limit)
	{
		k = 0;
		std::cout << "|";
		print_space();
		std::cout << j + 1;
		std:: cout << "|";
		print_space_str( PhoneBook.contacts[j].first_name);
		std:: cout << "|";
		print_space_str( PhoneBook.contacts[j].last_name);
		std:: cout << "|";
		print_space_str( PhoneBook.contacts[j].nickname);
		std:: cout << "|" << std::endl;
		j++;
	}

}

int	print_contact(PhoneBook PhoneBook, int i)
{
	int limit = 0;
	print_all(PhoneBook, i);
	std::cout << "enter the index of the client :";
	if(!(std::cin >> limit))
		return (1);
	if ((limit >= 1 && limit <= 8) && i >= limit)
	{
		std::cout << "first name :";
		std::cout << PhoneBook.contacts[limit - 1].first_name << std::endl;
		std::cout << "last name :";
		std::cout << PhoneBook.contacts[limit - 1].last_name << std::endl;
		std::cout << "nickname :";
		std::cout << PhoneBook.contacts[limit - 1].nickname << std::endl;
		std::cout << "darkest secret :";
		std::cout << PhoneBook.contacts[limit - 1].darkest_secret << std::endl;
		std::cout << "phone number :";
		std::cout << PhoneBook.contacts[limit - 1].phone_number << std::endl;
	}
	return (0);
}
