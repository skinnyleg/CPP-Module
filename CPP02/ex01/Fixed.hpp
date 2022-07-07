/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:53:06 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/07 21:26:44 by hmoubal          ###   ########.fr       */
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
	Fixed& operator=(Fixed const &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
};

#endif
