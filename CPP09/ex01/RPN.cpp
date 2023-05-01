/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:52:53 by hmoubal           #+#    #+#             */
/*   Updated: 2023/05/01 16:41:16 by hmoubal          ###   ########.fr       */
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
	opStack.push(res);
}

int RPN::checkSign(std::string option)
{
	for (size_t i = 0; i < option.size() - 1; i++)
	{
		if (std::isdigit(option[i]) && std::isdigit(option[i + 1]))
			return (-1);
	}
	return (0);
}

void RPN::parse_option(std::string option)
{
	std::string op;
	if (option.size() != 1 && checkSign(option) == -1)
		throw(std::runtime_error("Error"));
	for (size_t i = 0; i < option.size(); i++)
	{
		op += option[i];
		if (op[0] != '\t' && op[0] != ' ')
		{
			if (op.compare("+") && op.compare("-") && op.compare("/") && op.compare("*"))
			{
				if (!std::isdigit(op[0]))
					throw(std::runtime_error("Error"));
				else
					opStack.push(std::stoi(op));
			}
			else
				calculResult(op);
		}	
		op.clear();
	}
}

RPN::RPN(char *av)
{
	std::string str(av);

	parse_option(str);
	if (opStack.size() == 1)
		std::cout << opStack.top() << std::endl;
	else
		throw(std::runtime_error("Error"));
}

RPN::~RPN()
{

}
