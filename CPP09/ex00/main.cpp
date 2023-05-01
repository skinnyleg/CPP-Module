/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:33:48 by hmoubal           #+#    #+#             */
/*   Updated: 2023/05/01 15:16:33 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    
    try
    {
        if (ac != 2)
            throw (std::runtime_error("Wrong Number Of Arguments"));
        BitcoinExchange obj;
        obj.procces_data(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
