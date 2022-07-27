/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:50:01 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/07/27 23:55:02 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

typedef struct Data
{
	int num;
	char car;
} Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
#endif
