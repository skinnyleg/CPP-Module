/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:33:37 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/20 01:48:38 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

typedef std::map<std::string, double>::iterator iter;

class BitcoinExchange
{
    public:
        std::map<std::string, double, std::greater<std::string> > data;    
        BitcoinExchange();
        ~BitcoinExchange();
        void procces_data(const char* file);
        void check_error(std::string line);
        void searchInData(std::string date, double val);
};


#endif