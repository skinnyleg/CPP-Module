/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:27 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 15:40:56 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& obj) : name(obj.name)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = obj;
}

Bureaucrat::Bureaucrat(std::string str, int num) : name(str)
{
	std::cout << "Bureaucrat Name Constructor called" << std::endl;
	if (num <= 0)
		throw(GradeTooHighException());
	else if (num > 150)
		throw(GradeTooLowException());
	this->grade = num;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor called" << std::endl;
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	std::cout << "Bureaucrat Assignement Operator called" << std::endl;
	if (this != &obj)
	{
		if (obj.grade <= 0)
			throw(GradeTooHighException());
		else if (obj.grade > 150)
			throw(GradeTooLowException());
		this->grade = obj.grade;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName();
		std::cout << " couldn't sign " << form.getName();
		std::cout << " because Grade too low" << std::endl;
	}
}

void	Bureaucrat::Promotion()
{
	int grad = this->grade;
	grad--;
	if (grad <= 0)
			throw(GradeTooHighException());
	this->grade = grad;
}

void	Bureaucrat::Demotion()
{
	int grad = this->grade;
	grad++;
	if (grad > 150)
		throw(GradeTooLowException());
	this->grade = grad;
}

void	Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed ";
		std::cout << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
