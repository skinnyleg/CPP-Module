/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:53:06 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/07 15:25:41 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
	int	Fixed_pointvalue;
	static const int Fixed_bit;
	public:
	Fixed();
	Fixed(Fixed& a);
	~Fixed();
	Fixed& operator=(Fixed const &obj);
	int		getRawBits(void);
	void	setRawBits(int const raw);
};

#endif
