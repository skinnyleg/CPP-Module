/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:39:59 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 17:21:42 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
	target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string str) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Name Constructor called" << std::endl;
	target = str;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& obj) : Form(obj)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	target = obj.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	Form::operator=(obj);
	target = obj.target;
	std::cout << "RobotomyRequestForm Assignement Operator called" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != true)
		throw(NotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	std::cout << "drrrrr drrrrr drrrrr" << std::endl;
	srand(time(0));
	int a = rand();
	if (a % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (target);
}
