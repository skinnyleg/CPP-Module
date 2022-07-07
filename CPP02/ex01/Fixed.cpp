/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:57:46 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/07 18:37:00 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Fixed_bit = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	Fixed_pointvalue = 0;
}


Fixed::Fixed(const Fixed& a)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed_pointvalue = a.Fixed_pointvalue;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed_pointvalue);
}

void	Fixed::setRawBits(int const raw)
{
	Fixed_pointvalue = raw;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Fixed_pointvalue = obj.Fixed_pointvalue;
	return (*this);
}

Fixed::Fixed(const int num)
{
	Fixed_pointvalue = num;
}

Fixed::Fixed(const float num)
{
	Fixed_pointvalue = num;
}

// float	Fixed::toFloat(void)
// {

// }

// int		Fixed::toInt(void)
// {
// 	Fixed_pointvalue = roundf()
// }

// float Fixed::operator<<(Fixed const &obj){};
