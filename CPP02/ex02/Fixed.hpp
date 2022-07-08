/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:53:06 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/08 19:07:30 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int	Fixed_pointvalue;
	static const int Fixed_bit = 8;
	public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& a);
	~Fixed();
	bool	operator>(Fixed const &obj);
	bool	operator<(Fixed const &obj);
	bool	operator>=(Fixed const &obj);
	bool	operator<=(Fixed const &obj);
	bool	operator==(Fixed const &obj);
	bool	operator!=(Fixed const &obj);
	Fixed&	operator=(Fixed const &obj);
	Fixed&	operator+(Fixed const &obj);
	Fixed&	operator-(Fixed const &obj);
	Fixed&	operator*(Fixed const &obj);
	Fixed&	operator/(Fixed const &obj);
	Fixed&	operator++(void);
	Fixed&	operator++(int i);
	Fixed&	operator--(void);
	Fixed&	operator--(int i);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed& max(Fixed& obj1, Fixed obj2);
	// static int& min(int& fixed_point1, int& fixed_point2);
	// static int& min(int const & fixed_point1, int const & fixed_point2);
	static int& max(int& fixed_point1, int& fixed_point2);
	// static int& max(int const & fixed_point1, int const & fixed_point2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif
