/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:25:15 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/27 00:06:26 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	int phone_number;
	Contact()
	{
		first_name = "NULL";
		last_name = "NULL";
		nickname = "NULL";
		darkest_secret = "NULL";
		phone_number = 0;
	}
};

#endif
