/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:25:15 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/06/30 12:20:41 by hmoubal          ###   ########.fr       */
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
	std::string phone_number;
	int	index;
	int	old;
	Contact();
	~Contact();
};
#endif
