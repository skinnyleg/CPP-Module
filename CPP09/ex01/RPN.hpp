/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:52:49 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/23 23:02:48 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <limits>
#include <stack>

class RPN
{

    public:
		std::stack<double> opStack;
		void parse_option(std::string option);
		void calculResult(std::string option);
        RPN(char *av);
        ~RPN();
};

#endif
