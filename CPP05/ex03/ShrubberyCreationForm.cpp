/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:42:58 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 17:22:00 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 72, 45)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
	target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : Form("ShrubberyCreationForm", 72, 45)
{
	std::cout << "ShrubberyCreationForm Name Constructor called" << std::endl;
	target = str;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& obj) : Form(obj)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	target = obj.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	Form::operator=(obj);
	target = obj.target;
	std::cout << "ShrubberyCreationForm Assignement Operator called" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != true)
		throw(NotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	std::string file = this->getTarget() + "_shrubbery";
	std::string tree = "       ###\n";
	tree = tree + "      #o###\n";
	tree = tree + "    #####o###\n";
	tree = tree + "   #o#\\#|#/###\n";
	tree = tree + "    ###\\|/#o#\n";
	tree = tree + "     # }|{  #\n";
	tree = tree + "       }|{\n";
	std::ofstream output;
	output.open(file);
	if (!output.is_open())
	{
		std::cout << "couldn't create" << std::endl;
		exit(1);
	}
	output << tree;
	output.close();
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (target);
}
