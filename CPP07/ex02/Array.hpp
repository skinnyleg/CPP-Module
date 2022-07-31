/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:31:59 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/31 18:11:14 by hmoubal          ###   ########.fr       */
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
		int size;
	public:
		Array()
		{
			element = new T();
			size = 1;
		}
		Array(unsigned int n)
		{
			element = new T [n];
			size = n;
		}
		Array(Array & obj)
		{
			this->element = new T [obj.getSize()];
			*this = obj;
		}
		int	getSize(void) const
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
			delete element;
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
