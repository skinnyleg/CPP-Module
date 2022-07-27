/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:33 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 18:22:28 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void	InternMakeForm(std::string formName, std::string target)
{
	Intern	haitam;
	Form*	form;
	form = haitam.makeForm(formName, target);

	if (form)
	{
		std::cout << "\nResult : SUCCESS\n\n";
		std::cout << *form;
		std::cout << "\n[ Target ]\t";
		std::cout << (*(RobotomyRequestForm*)form).getTarget() << std::endl;
		delete form;
	}
	else
	{
		std::cout << "\nResult : FAIL\n";
	}
}

int		main()
{
	std::cout << "\n=================\n\n";
	InternMakeForm("MakeShrubbery", "shrubery");
	std::cout << "\n=================\n\n";
	InternMakeForm("MakShrubbery", "shrubery");
	std::cout << "\n=================\n\n";
	InternMakeForm("MakeRobotomy", "robotomy");
	std::cout << "\n=================\n\n";
	InternMakeForm("MakRobotomy", "robotomy");
	std::cout << "\n=================\n\n";
	InternMakeForm("MakePresidential", "Presidential");
	std::cout << "\n=================\n\n";
	InternMakeForm("MakPresidential", "Presidential");

	return (0);
}


