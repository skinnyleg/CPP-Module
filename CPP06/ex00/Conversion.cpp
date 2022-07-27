/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:21:12 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/07/27 23:46:49 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << "Conversion Default Constructor called" << std::endl;
}

Conversion::Conversion(char *av) : input(av)
{
	std::cout << "Conversion Name Constructor called" << std::endl;
}

Conversion::Conversion(Conversion &obj)
{
	std::cout << "Conversion Copy Constructor called" << std::endl;
	*this = obj;
}

Conversion& Conversion::operator=(const Conversion& obj)
{
	std::cout << "Conversion Assignement Operator called" << std::endl;
	if (this != &obj)
		this->input = obj.input;
	return (*this);
}

Conversion::~Conversion()
{
	std::cout << "Conversion Default Destructor called" << std::endl;
}

void	Conversion::Convert(void) const
{
	this->convert_toChar(this->input);
	this->convert_toInt(this->input);
	this->convert_toFloat(this->input);
	this->convert_toDouble(this->input);
}

void	Conversion::convert_toChar(std::string input) const
{
	try
	{
		int num = std::stoi(input);
		if (isprint(num))
			std::cout << "Char: " << "'" << static_cast<char>(num) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" <<std::endl;
	}
	catch(...)
	{
		std::cout << "Impossible to convert to char" << '\n';
	}
}

void	Conversion::convert_toInt(std::string input) const
{
	try
	{
		int num = std::stoi(input);
		std::cout << "Int: " << static_cast<int>(num) << std::endl;
	}
	catch(...)
	{
		std::cout << "Int: Impossible to convert to Int" << '\n';
	}
}

void	Conversion::convert_toFloat(std::string input) const
{
	try
	{
		float num = std::stof(input);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "Float: " << static_cast<float>(num) << "f" << std::endl;
	}
	catch(...)
	{
		std::cout << "Float: Impossible to convert to Float" << '\n';
	}
}

void	Conversion::convert_toDouble(std::string input) const
{
	try
	{
		double num = std::stod(input);
		std::cout << "Double: " << static_cast<double>(num) << std::endl;
	}
	catch(...)
	{
		std::cout << "Double: Impossible to convert to Double" << '\n';
	}
}
