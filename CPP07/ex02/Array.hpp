/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:31:59 by hmoubal           #+#    #+#             */
/*   Updated: 2022/08/01 13:15:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *element;
		unsigned int size;
	public:
		Array()
		{
			element = new(std::nothrow) T();
			if (element == NULL)
			{
				std::cout << "malloc error" << std::endl;
				exit(1);
			}
			size = 1;
		}
		Array(unsigned int n)
		{
			int a = n;
			if (a <= 0)
			{
				std::cout << "size must be bigger than 0" << std::endl;
				exit(1);
			}
			element = new(std::nothrow) T [n];
			if (element == NULL)
			{
				std::cout << "malloc error" << std::endl;
				exit(1);
			}
			size = n;
		}
		Array(const Array & obj)
		{
			this->element = new(std::nothrow) T [obj.getSize()];
			if (element == NULL)
			{
				std::cout << "malloc error" << std::endl;
				exit(1);
			}
			*this = obj;
		}
		int getSize(void) const
		{
			return (this->size);
		}
		Array& operator=(const Array& obj)
		{
			int i = 0;
			if (this != &obj)
			{
				while(i < obj.getSize())
				{
					element[i] = obj.element[i];
					i++;
				}
				size = obj.size;
			}
			return (*this);
		}
		T& operator[](int index)
		{
			if (index >= 0 && index < this->getSize())
			{
				return (this->element[index]);
			}
			throw(OutBoundException());
		}
		~Array()
		{
			delete[] element;
		}

		class OutBoundException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Index Is Out Of Bound");
			}
		};
};

#endif
