/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:39:53 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/05 21:19:17 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl var;
	var.complain("INFO");
	var.complain("DEBUG");
	var.complain("ERROR");
	var.complain("WARNING");
	var.complain("AHAH");
	return (0);
}
