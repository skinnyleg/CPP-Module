/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:54:42 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/29 18:16:41 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>


typedef std::vector<size_t> Vector;
typedef std::deque<size_t> Deque;

class PmergeMe
{
	public:
		Vector vec;
		Deque deq;
		void parseNumbers(char **av, int ac);
		void fillContainers(char **av, int ac);
		void sortVector();
		void InsertSortVector(Vector &arr);
		Vector MergeSortVector(Vector arr);
		void PrintVector();

		
		void sortDeque();
		void InsertSortDeque();
		void MergeSortDeque();
		void PrintDeque();
		PmergeMe(char **av, int ac);
		~PmergeMe();
};

#endif // ! PMERGEME_HPP
