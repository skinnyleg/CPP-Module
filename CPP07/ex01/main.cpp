/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:06:15 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/28 16:04:37 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) {return ;}
		int get(void) const {return (this->_n);}
		~Awesome();
};

std::ostream& operator<<(std::ostream& o, Awesome const & rhs) {o << rhs.get(); return (o);}
template <typename T>
void print(T const& x) {std::cout << x << std::endl; return ;}


int main(void)
{
	int tab[] = {0,1,2,3,4};
	Awesome tab2[5];
	iter(tab, 5,print);
	// iter(tab2, 5,print);
	return (0);
}
