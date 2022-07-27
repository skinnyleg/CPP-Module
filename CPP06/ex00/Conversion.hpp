/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:09:47 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 00:14:41 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>

class Conversion
{
	private:
		std::string input;
	public:
		Conversion();
		Conversion(char *av);
		Conversion(Conversion &obj);
		Conversion& operator=(const Conversion& obj);
		~Conversion();
		void	Convert(void) const;
		void	convert_toChar(std::string input) const;
		void	convert_toInt(std::string input) const;
		void	convert_toFloat(std::string input) const;
		void	convert_toDouble(std::string input) const;
};

#endif
