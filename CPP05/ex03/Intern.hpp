/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:21:16 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 18:25:27 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& obj);
		Intern& operator=(const Intern& obj);
		~Intern();
		Form *MakeShrubbery(std::string &target) const;
		Form *MakeRobotomy(std::string &target) const;
		Form *MakePresidential(std::string &target) const;
		Form	*makeForm(std::string name_form, std::string target) const;

		class NoAvailableFormException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return ("Intern failed!! No Availble Form");
			}
		};
};


#endif
