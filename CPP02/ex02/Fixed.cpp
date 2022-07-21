/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:57:46 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/21 16:38:47 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	Fixed_pointvalue = 0;
}


Fixed::Fixed(const Fixed& a)
{
	Fixed_pointvalue = a.Fixed_pointvalue;
}


Fixed::~Fixed(){};


int		Fixed::getRawBits(void) const
{
	return (Fixed_pointvalue);
}

void	Fixed::setRawBits(int const raw)
{
	Fixed_pointvalue = raw;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
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
	f = ((float)Fixed_pointvalue / (1 << Fixed_bit));
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

bool	Fixed::operator>(Fixed const &obj)
{
	if (this->toFloat() > obj.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &obj)
{
	if (this->toFloat() < obj.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &obj)
{
	if (this->toFloat() >= obj.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &obj)
{
	if (this->toFloat() <= obj.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &obj)
{
	if (this->toFloat() == obj.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &obj)
{
	if (this->toFloat() != obj.toFloat())
		return (true);
	return (false);
}

Fixed&	Fixed::operator+(Fixed const &obj)
{
	float f = this->toFloat() + obj.toFloat();
	Fixed a(f);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (*this);
}

Fixed&	Fixed::operator-(Fixed const &obj)
{
	float f = this->toFloat() - obj.toFloat();
	Fixed a(f);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (*this);
}

Fixed&	Fixed::operator*(Fixed const &obj)
{
	float f = this->toFloat() * obj.toFloat();
	Fixed a(f);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (*this);
}

Fixed&	Fixed::operator/(Fixed const &obj)
{
	float f = this->toFloat() / obj.toFloat();
	Fixed a(f);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (*this);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}


Fixed&	Fixed::operator++(void)
{
	float f = (this->toFloat() + 0.00390625);
	Fixed a(f);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (*this);
}

Fixed&	Fixed::operator++(int i)
{
	(void)i;
	float f = (this->toFloat() + 0.00390625);
	Fixed a(f);
	static Fixed b(*this);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (b);
}

Fixed&	Fixed::operator--(void)
{
	float f = (this->toFloat() - 0.00390625);
	Fixed a(f);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (*this);
}

Fixed&	Fixed::operator--(int i)
{
	(void)i;
	float f = (this->toFloat() - 0.00390625);
	Fixed a(f);
	static Fixed b(*this);
	this->Fixed_pointvalue = a.Fixed_pointvalue;
	return (b);
}

