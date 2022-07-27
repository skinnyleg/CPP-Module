/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:30:44 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 17:21:33 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
	target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Name Constructor called" << std::endl;
	target = str;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& obj) : Form(obj)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	target = obj.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	Form::operator=(obj);
	target = obj.target;
	std::cout << "PresidentialPardonForm Assignement Operator called" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != true)
		throw(NotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (target);
}
