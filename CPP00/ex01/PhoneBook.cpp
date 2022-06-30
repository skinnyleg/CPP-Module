/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:27:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/06/30 18:45:14 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int		PhoneBook::oldest(void)
{
	int i;
	int lowest;

	i = 0;
	lowest = contacts[i].old;
	while (i < 8)
	{
		if (lowest > contacts[i].old)
			lowest = contacts[i].old;
		i++;
	}
	i = 0;
	while (i < 8)
	{
		if (lowest == contacts[i].old)
			break ;
		i++;
	}
	return (contacts[i].index);
}

void	PhoneBook::add_contact(Contact new_contact, int i)
{
	int j;
	j = oldest();
	contacts[j].set_first(new_contact.get_first());
	contacts[j].set_last(new_contact.get_last());
	contacts[j].set_nick(new_contact.get_nick());
	contacts[j].set_secret(new_contact.get_secret());
	contacts[j].set_number(new_contact.get_number());
	contacts[j].old = i;
}

int	contact_info(PhoneBook *PhoneBook, int *i)
{
	Contact new_contact;
	std::string input;
	std::cout << "Enter a first name :";
	// std::cin >> input;
	std::getline(std::cin, input);
	if (input.empty() == true)
		return (1);
	new_contact.set_first(input);
	std::cout << "Enter a last name :";
	// std::cin >> input;
	std::getline(std::cin, input);
	if (input.empty() == true)
		return (1);
	new_contact.set_last(input);
	std::cout << "Enter a nickname :";
	// std::cin >> input;
	std::getline(std::cin, input);
	if (input.empty() == true)
		return (1);
	new_contact.set_nick(input);
	std::cout << "Enter a darkest secret :";
	// std::cin >> input;
	std::getline(std::cin, input);
	if (input.empty() == true)
		return (1);
	new_contact.set_secret(input);
	std::cout << "Enter a phone number :";
	// std::cin >> input;
	std::getline(std::cin, input);
	if (input.empty() == true)
		return (1);
	new_contact.set_number(input);
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
	if (i >= 8)
		limit = 8;
	else
		limit = i;
	std::cout << "|     INDEX|     FIRST|      LAST|  NICKNAME|\n";
	while (j < limit)
	{
		std::cout << "|";
		print_space();
		std::cout << j + 1;
		std:: cout << "|";
		print_space_str(PhoneBook.contacts[j].get_first());
		std:: cout << "|";
		print_space_str(PhoneBook.contacts[j].get_last());
		std:: cout << "|";
		print_space_str(PhoneBook.contacts[j].get_nick());
		std:: cout << "|" << std::endl;
		j++;
	}

}

int	print_contact(PhoneBook PhoneBook, int i)
{
	int limit = 0;
	std::string input;
	print_all(PhoneBook, i);
	std::cout << "enter the index of the client :";
	std::getline(std::cin, input);
	if(input.empty())
		return (1);
	limit = stoi(input);
	if ((limit >= 1 && limit <= 8) && i >= limit)
	{
		std::cout << "first name :";
		std::cout << PhoneBook.contacts[limit - 1].get_first() << std::endl;
		std::cout << "last name :";
		std::cout << PhoneBook.contacts[limit - 1].get_last() << std::endl;
		std::cout << "nickname :";
		std::cout << PhoneBook.contacts[limit - 1].get_nick() << std::endl;
		std::cout << "darkest secret :";
		std::cout << PhoneBook.contacts[limit - 1].get_secret() << std::endl;
		std::cout << "phone number :";
		std::cout << PhoneBook.contacts[limit - 1].get_number() << std::endl;
	}
	return (0);
}

void	indexing_contact(PhoneBook *PhoneBook)
{
	int i;

	i = 0;
	while (i < 8)
	{
		PhoneBook->contacts[i].index = i;
		PhoneBook->contacts[i].old = -1;
		i++;
	}
}
