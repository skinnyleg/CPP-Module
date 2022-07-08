/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:57:46 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/08 14:28:49 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	Fixed_pointvalue = (num * (1 << Fixed_bit));
}

Fixed::Fixed(const float num)
{
	Fixed_pointvalue = roundf(num * (1 << Fixed_bit));
}

float	Fixed::toFloat(void) const
{
	float f;
	f = ((float)Fixed_pointvalue / (float)(1 << Fixed_bit));
	return (f);
}

int		Fixed::toInt(void) const
{
	return ((Fixed_pointvalue / (1 << Fixed_bit)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
