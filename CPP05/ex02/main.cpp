/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:33 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 16:24:17 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm Form1("Shrubbery");
	RobotomyRequestForm Form2("Robotomy");
	PresidentialPardonForm Form3("Presidential");
	Bureaucrat soooh("haitam", 1);

	std::cout << Form1 << std::endl;
	std::cout << Form2 << std::endl;
	std::cout << Form3 << std::endl;
	std::cout << soooh << std::endl;

	std::cout << ">> ShrubberyCreationForm ! <<" << std::endl;
	soooh.signForm(Form1);
	try
	{
		Form1.beSigned(soooh);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << Form1 << std::endl;

	soooh.executeForm(Form1);
	std::string name = Form1.getName() + "_shrubbery";
	std::cout << "Now, we open file, name : " << name << ".\nResult : ";
	std::ifstream infile(name);
	if (infile.fail())
		std::cout << "FAIL!!\n\tThis file (" << name << ") does not exist\n";
	else
	{
		std::cout << "SUCCESS!! LET`S SHOW!!\n";
		std::cout << std::endl;
		std::string str;
		while (!infile.eof())
		{
			str.clear();
			std::getline(infile, str);
			std::cout << str << std::endl;
		}
		infile.close();
	}
	std::cout << std::endl;

	std::cout << ">> RobotomyRequestForm ! <<" << std::endl;
	soooh.signForm(Form2);
	try
	{
		Form2.beSigned(soooh);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << Form2 << std::endl;

	soooh.executeForm(Form2);
	std::cout << std::endl;

	std::cout << ">> PresidentialPardonForm ! <<" << std::endl;
	soooh.signForm(Form3);
	try
	{
		Form3.beSigned(soooh);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << Form3 << std::endl;

	soooh.executeForm(Form3);
	std::cout << std::endl;

	return 0;
}


