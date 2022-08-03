/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:19:15 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/03 22:06:37 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <class T>
void	easyfind(T cont, int value)
{
	typename T::iterator it = cont.begin();
	for(; it != cont.end(); it++)
	{
		if (value == *it)
		{
			std::cout << "found it" << std::endl;
			return ;
		}
	}
	std::cout << "number doesn't exist" << std::endl;
}

#endif
