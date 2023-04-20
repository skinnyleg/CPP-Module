/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:34:16 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/20 02:01:36 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::pair<std::string, double> parse_line(std::string line)
{
    int pos = line.find(",");
    std::string date = line.substr(0, pos);
    std::string value = line.substr(pos + 1);
    return (std::make_pair(date, stod(value)));
}

BitcoinExchange::BitcoinExchange()
{
    std::string line;
    std::ifstream dataFile("data.csv");
    if (!dataFile.is_open())
        throw (std::runtime_error("file not found"));
    std::getline(dataFile, line);
    while (std::getline(dataFile, line))
        data.insert(parse_line(line));
    dataFile.close();
}

BitcoinExchange::~BitcoinExchange()
{
    data.clear();
}

double check_value(std::string value, std::string line)
{
    int countSign = 0;
    int countPoint = 0;
    if (value.empty())
        throw(std::runtime_error("Error: bad input => " + line));
    for (size_t i = 0; i < value.size(); i++)
    {
        if (value[i] == '.')
            countPoint++;
        if (value[i] == '-' || value[i] == '+')
            countSign++;
    }
    if (countPoint > 1 || countSign > 1)
        throw(std::runtime_error("Error: bad input => " + line));
    for (size_t i = 0; i < value.size(); i++)
    {
        if (!isdigit(value[i]) && value[i] != '-' && value[i] != '+' && value[i] != '.')
            throw(std::runtime_error("Error: bad input => " + line));
    }
    double val = stod(value);
    if (val < 0)
        throw(std::runtime_error("Error: not a positive number."));
    if (val > 1000)
        throw(std::runtime_error("Error: too large a number."));
    return (val);
}

void extract_values(std::string date, std::string line)
{
    int pos = date.find('-');
    std::string year = date.substr(0, pos);
    date.erase(0, pos + 1);
    pos = date.find('-');
    std::string month = date.substr(0, pos);
    date.erase(0, pos + 1);
    std::string day = date.substr(0);
    int yearNum = stoi(year);
    int monthNum = stoi(month);
    int dayNum = stoi(day);
    if (yearNum <= 0)
        throw(std::runtime_error("Error: bad input => " + line));
    if (monthNum <= 0 || monthNum > 12 || dayNum <= 0)
        throw(std::runtime_error("Error: bad input => " + line));
    if (monthNum == 2)
    {
        if ((yearNum % 4 == 0 && yearNum % 100 != 0) || yearNum % 400 == 0)
        {
            if (dayNum > 29)
                throw(std::runtime_error("Error: bad input => " + line));
        }
        else
        {
            if (dayNum > 28)
                throw(std::runtime_error("Error: bad input => " + line));
        }
    }
    else if (monthNum == 4 || monthNum == 6 || monthNum == 9 || monthNum == 11)
    {
        if (dayNum > 30)
            throw(std::runtime_error("Error: bad input => " + line));
    }
    else
    {
        if (dayNum > 31)
            throw(std::runtime_error("Error: bad input => " + line));
    }
}

void check_date(std::string date, std::string line)
{
    int countSep = 0;
    if (date.empty())
        throw(std::runtime_error("Error: bad input => " + line));
    for (size_t i = 0; i < date.size(); i++)
    {
        if (date[i] == '-')
            countSep++;
    }
    if (countSep != 2)
        throw(std::runtime_error("Error: bad input => " + line));
    for (size_t i = 0; i < date.size(); i++)
    {
        if (!isdigit(date[i]) && date[i] != '-')
            throw(std::runtime_error("Error: bad input => " + line));
    }
    extract_values(date, line);
}

void BitcoinExchange::searchInData(std::string date, double val)
{
    iter it = data.lower_bound(date);
    if (it == data.end())
        it--;
    std::cout << date << " => " << val << " = " << val * it->second << std::endl;
}

void BitcoinExchange::check_error(std::string line)
{
    size_t pos = line.find("|");
    if (pos == std::string::npos)
        throw(std::runtime_error("Error: bad input => " + line));
    std::string date = line.substr(0, pos);
    std::string value = line.substr(pos + 1);
    if (date[date.size() - 1] != ' ')
        throw(std::runtime_error("Error: bad input => " + line));
    if (value[0] != ' ')
        throw(std::runtime_error("Error: bad input => " + line));
    value = value.substr(1);
    date = date.substr(0, date.size() - 1);
    double val = check_value(value, line);
    check_date(date, line);
    searchInData(date, val);
}

void BitcoinExchange::procces_data(const char* file)
{
    std::string line;
    std::ifstream inputData(file);
    if (!inputData.is_open())
        throw (std::runtime_error("file not found"));
    std::getline(inputData, line);
    while (std::getline(inputData, line))
    {
        try
        {
            check_error(line);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    inputData.close();
}
