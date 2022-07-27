/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:25:15 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 00:14:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

public:
	int	index;
	int	old;
	std::string get_first();
	std::string get_last();
	std::string get_nick();
	std::string get_secret();
	std::string get_number();
	void set_first(std::string afirst_name);
	void set_last(std::string alast_name);
	void set_nick(std::string anickname);
	void set_secret(std::string asecret);
	void set_number(std::string anumber);
	Contact();
	~Contact();
};
#endif
