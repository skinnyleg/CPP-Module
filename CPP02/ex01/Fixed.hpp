/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:53:06 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/07 18:37:06 by hmoubal          ###   ########.fr       */
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
	static const int Fixed_bit;
	public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& a);
	~Fixed();
	Fixed& operator=(Fixed const &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void);
	int		toInt(void);
	float operator<<(Fixed const &obj);
};

#endif
