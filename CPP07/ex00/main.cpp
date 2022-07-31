/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:25:26 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/31 18:33:30 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(0) {}
		Awesome(int n) : _n(n) {}
		Awesome & operator=(Awesome & a) {_n = a._n; return *this;}
		bool operator==(Awesome const & a) const {return (this->_n == a._n);}
		bool operator!=(Awesome const & a) {return (this->_n != a._n);}
		bool operator>(Awesome const & a) {return (this->_n > a._n);}
		bool operator<(Awesome const & a) {return (this->_n < a._n);}
		bool operator>=(Awesome const & a) {return (this->_n >= a._n);}
		bool operator<=(Awesome const & a) {return (this->_n <= a._n);}
		int get_n(void) const {return (this->_n);}
		~Awesome(){};
};

std::ostream& operator<<(std::ostream& o, Awesome const & rhs) {o << rhs.get_n(); return (o);}

int main(void)
{

	std::cout << "\\\\\\\\ Subject test \\\\\\\\" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "\\\\\\\\ Evaluation test \\\\\\\\" << std::endl;
	Awesome h(2), j(4);
	::swap(h,j);
	std::cout << "h == " << h << ", j == " << j << std::endl;
	std::cout << "max( h, j ) = " << ::max(h,j) << std::endl;
	std::cout << "min( h, j ) = " << ::min(h,j) << std::endl;
	return 0;
}
