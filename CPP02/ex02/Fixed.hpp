/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:53:06 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/22 20:35:27 by skinnyleg        ###   ########.fr       */
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
	Fixed	operator+(Fixed const &obj) const;
	Fixed	operator-(Fixed const &obj) const;
	Fixed	operator*(Fixed const &obj) const;
	Fixed	operator/(Fixed const &obj) const;
	Fixed	operator++(void);
	Fixed	operator++(int i);
	Fixed	operator--(void);
	Fixed	operator--(int i);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif
