/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:35:44 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/30 17:49:56 by hmoubal          ###   ########.fr       */
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
	int		oldest(void);
	void	add_contact(Contact new_contact, int i);
};

int	contact_info(PhoneBook *PhoneBook, int *i);
int	print_contact(PhoneBook PhoneBook, int i);
void	indexing_contact(PhoneBook *PhoneBook);
#endif
