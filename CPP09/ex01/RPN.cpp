/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:52:53 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/23 23:37:39 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void RPN::calculResult(std::string option)
{
	if (opStack.size() < 2)
		throw(std::runtime_error("Error"));
	double op2 = opStack.top();
	opStack.pop();
	double op1 = opStack.top();
	opStack.pop();
	double res = 0;
	if (!option.compare("+"))
		res = op1 + op2;
	else if (!option.compare("*"))
		res = op1 * op2;
	else if (!option.compare("-"))
		res = op1 - op2;
	else if (!option.compare("/"))
		res = op1 / op2;
	std::cout << "op1 = " << op1 << std::endl;
	std::cout << "operator = " << option << std::endl;
	std::cout << "op2 = " << op2 << std::endl;
	std::cout << "res = " << res << std::endl;
	std::cout << std::endl;
	opStack.push(res);
}
void RPN::parse_option(std::string option)

{
	if (option.size() != 1)
		throw(std::runtime_error("Error"));
	if (option.compare("+") && option.compare("-") && option.compare("/") && option.compare("*"))
	{
		if (!std::isdigit(option[0]))
			throw(std::runtime_error("Error"));
		else
			opStack.push(std::stoi(option));
	}
	else
		calculResult(option);
}

RPN::RPN(char *av)
{
	std::string str(av);
	int i = 0;
	
	while (!str.empty())
	{
		while (str[i] == ' ')
			i++;
		str.erase(0, i);
		if (str.empty())
			break;
		std::string option = str.substr(0, str.find(' '));
		parse_option(option);
		str.erase(0, str.find(' '));
		i = 0;
	}
	std::cout << (int)opStack.top() << std::endl;
}

RPN::~RPN()
{

}
