/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:27 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/26 18:23:07 by hmoubal          ###   ########.fr       */
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
