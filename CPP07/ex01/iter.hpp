/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:06:30 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/01 12:46:25 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) {return ;}
		int get(void) const {return (this->_n);}
		~Awesome(){};
};

std::ostream& operator<<(std::ostream& o, Awesome const & rhs) {o << rhs.get(); return (o);}
template <typename T>
void print(T const &x) {std::cout << x << std::endl; return ;}



template <typename T>
void iter(T *array, int len, void (*ptr) (T const &))
{
	for (int i = 0; i < len; i++)
	{
		(*ptr) (array[i]);
	}
}
#endif
