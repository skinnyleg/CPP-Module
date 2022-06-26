/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:35:44 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/26 23:52:20 by skinnyleg        ###   ########.fr       */
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
	void	add_contact(Contact new_contact, int i)
	{
		contacts[i].first_name = new_contact.first_name;
		contacts[i].last_name = new_contact.last_name;
		contacts[i].nickname = new_contact.nickname;
		contacts[i].darkest_secret = new_contact.darkest_secret;
		contacts[i].phone_number = new_contact.phone_number;
	}
};


#endif
