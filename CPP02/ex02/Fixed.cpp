/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:57:46 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/08 19:06:54 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	Fixed_pointvalue = 0;
}


Fixed::Fixed(const Fixed& a)
{
	// std::cout << "Copy constructor called" << std::endl;
	Fixed_pointvalue = a.Fixed_pointvalue;
}


Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (Fixed_pointvalue);
}

void	Fixed::setRawBits(int const raw)
{
	Fixed_pointvalue = raw;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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

// static int& min(int& fixed_point1, int& fixed_point2)
// {
// 	int c;
// 	if (fixed_point1 < fixed_point2)
// 		c = fixed_point1;
// 	else
// 		c = fixed_point2;
// 	static int& ret = c;
// 	return (ret);
// }

// static int& min(int const & fixed_point1, int const & fixed_point2)
// {
// 	int c;
// 	if (fixed_point1 < fixed_point2)
// 		c = fixed_point1;
// 	else
// 		c = fixed_point2;
// 	static int& ret = c;
// 	return (ret);
// }

int& max(int& fixed_point1, int& fixed_point2)
{
	int c;
	if (fixed_point1 > fixed_point2)
		c = fixed_point1;
	else
		c = fixed_point2;
	static int& ret = c;
	return (ret);
}

// static int& max(int const & fixed_point1, int const & fixed_point2)
// {
// 	int c;
// 	if (fixed_point1 > fixed_point2)
// 		c = fixed_point1;
// 	else
// 		c = fixed_point2;
// 	static int& ret = c;
// 	return (ret);
// }

static Fixed& max(Fixed& obj1, Fixed obj2)
{
	static Fixed b;
	b.max(obj1.getRawBits(), obj2.getRawBits());
	return(b);
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

