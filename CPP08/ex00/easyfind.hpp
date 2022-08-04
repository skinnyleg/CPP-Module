/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:19:15 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/04 13:14:02 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
void	easyfind(T cont, int value)
{
	typename T::iterator ret = std::find(cont.begin(), cont.end(), value);
	if (ret == cont.end())
		std::cout << value << " doesn't exist" << std::endl;
	else
		std::cout << "found the number " << value << std::endl;

}

#endif
