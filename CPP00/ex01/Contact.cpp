/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:04:19 by hmoubal           #+#    #+#             */
/*   Updated: 2022/06/30 17:37:03 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first()
{
	return (first_name);
}
std::string Contact::get_last()
{
	return (last_name);
}
std::string Contact::get_nick()
{
	return (nickname);
}
std::string Contact::get_secret()
{
	return (darkest_secret);
}
std::string Contact::get_number()
{
	return (phone_number);
}

void Contact::set_first(std::string afirst_name)
{
	first_name = afirst_name;
}
void Contact::set_last(std::string alast_name)
{
	last_name = alast_name;
}
void Contact::set_nick(std::string anickname)
{
	nickname = anickname;
}
void Contact::set_secret(std::string asecret)
{
	darkest_secret = asecret;
}
void Contact::set_number(std::string anumber)
{
	phone_number = anumber;
}
