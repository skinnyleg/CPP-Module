/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:25:47 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 15:02:23 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T x, T y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}
template <typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}
template <typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif
