/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:29:12 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 18:32:22 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern& obj)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = obj;
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& obj)
{
	std::cout << "Intern Assignement Operator called" << std::endl;
	(void)obj;
	return (*this);
}

Form *Intern::MakeShrubbery(std::string &target) const
{
	Form	*obj = new ShrubberyCreationForm(target);
	return (obj);
}

Form *Intern::MakeRobotomy(std::string &target) const
{
	Form	*obj = new RobotomyRequestForm(target);
	return (obj);
}

Form *Intern::MakePresidential(std::string &target) const
{
	Form	*obj = new PresidentialPardonForm(target);
	return (obj);
}

Form	*Intern::makeForm(std::string name_form, std::string target) const
{
	std::cout << "Intern is creating " << name_form << std::endl;
	std::string option[3] = {"MakeShrubbery" , "MakeRobotomy" , "MakePresidential"};
	int i = 0;
	try
	{
		for(i = 0; i < 3 ; i++)
		{
			if (name_form == option[i])
			{
				switch(i)
				{
					case 0 :
						return (this->MakeShrubbery(target));
						break ;
					case 1 :
						return (this->MakeRobotomy(target));
						break ;
					case 2 :
						return (this->MakePresidential(target));
						break ;
					default :
						break ;
				}
			}
		}
		throw(NoAvailableFormException());
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}
