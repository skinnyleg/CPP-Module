/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:44:42 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/26 22:43:41 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Form") , GradeSign(150) , GradeExec(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
	sign = false;
}

Form::Form(Form &obj) : name(obj.name), sign(obj.sign), GradeSign(obj.GradeSign), GradeExec(obj.GradeExec)
{
	std::cout << "Form Copy Constructor called" << std::endl;
	if (GradeSign <= 0 || GradeExec <= 0)
		throw(GradeTooHighException());
	else if (GradeSign > 150 || GradeExec > 150)
		throw(GradeTooLowException());
}

Form::Form(std::string str,int a, int b) : name(str), sign(false) ,GradeSign(a), GradeExec(b)
{
	std::cout << "Form Name Constructor called" << std::endl;
	if (GradeSign <= 0 || GradeExec <= 0)
		throw(GradeTooHighException());
	else if (GradeSign > 150 || GradeExec > 150)
		throw(GradeTooLowException());
}

Form::~Form()
{
	std::cout << "Form Default Destructor called" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
	std::cout << "Form Assignement Operator called" << std::endl;
	if (this != &obj)
		this->sign = obj.sign;
	return (*this);
}

std::string Form::getName(void) const
{
	return (name);
}

bool	Form::getSigned(void) const
{
	return (sign);
}

int	Form::getGradeSign(void) const
{
	return (GradeSign);
}

int	Form::getGradeExec(void) const
{
	return (GradeExec);
}

void	Form::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() <= this->getGradeSign())
		sign = true;
	else
		throw(GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& os, const Form& obj)
{
	os << "Form Name " << obj.getName() << std::endl;
	if (obj.getSigned() == false)
		os << "Sign Status " << "false" << std::endl;
	else if(obj.getSigned() == true)
		os << "Sign Status " << "true" << std::endl;
	os << "Sign Grade " << obj.getGradeSign() << std::endl;
	os << "Sign Execute " << obj.getGradeExec() << std::endl;
	return (os);
}
