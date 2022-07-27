/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:56:57 by skinnyleg         #+#    #+#             */
/*   Updated: 2022/07/28 00:05:52 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	uintptr_t uintptr;

	Data data;
	data.num = 42;
	data.car = 'a';

	std::cout << "i: " << data.num << std::endl;
	std::cout << "c: " << data.car << std::endl;

	uintptr = serialize(&data);
	std::cout << "uintptr: " << uintptr << std::endl;
	// the value of uintptr is the address of data

	Data *data_ds;
	data_ds = deserialize(uintptr);

	std::cout << "new i: " << data_ds->num << std::endl;
	std::cout << "new c: " << data_ds->car << std::endl;

	return 0;
}
