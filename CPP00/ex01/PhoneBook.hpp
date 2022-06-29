/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:35:44 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/29 17:27:53 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
public:
	Contact contacts[8];
	PhoneBook(void);
	~PhoneBook(void);
	int		oldest(void)
	{
		int i;
		int lowest;

		i = 0;
		lowest = contacts[i].index;
		while (i < 8)
		{
			if (lowest > contacts[i].index)
				lowest = contacts[i].index;
			i++;
		}
		return (lowest);
	}
	void	add_contact(Contact new_contact, int i)
	{
		int j;
		if (i >= 8)
			j = oldest();
		else
			j = i;
		contacts[j].first_name = new_contact.first_name;
		contacts[j].last_name = new_contact.last_name;
		contacts[j].nickname = new_contact.nickname;
		contacts[j].darkest_secret = new_contact.darkest_secret;
		contacts[j].phone_number = new_contact.phone_number;
		contacts[j].index = i;
	}
};

int	contact_info(PhoneBook *PhoneBook, int *i);
int	print_contact(PhoneBook PhoneBook, int i);
#endif
