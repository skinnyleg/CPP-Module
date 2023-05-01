/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:54:42 by hmoubal           #+#    #+#             */
/*   Updated: 2023/05/01 15:18:37 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>


typedef std::vector<size_t> Vector;
typedef std::deque<size_t> Deque;

class PmergeMe
{
	public:
		Vector vec;
		clock_t tVec;
		Deque deq;
		clock_t tDeq;
		Vector unsorted;
		void parseNumbers(char **av, int ac);
		void fillContainers(char **av, int ac);


		void sortVector();
		void InsertSortVector(Vector &arr);
		Vector MergeSortVector(Vector arr);
		void PrintVector();

		
		void sortDeque();
		void InsertSortDeque(Deque &arr);
		Deque MergeSortDeque(Deque arr);
		void PrintDeque();

		void PrintOutput();
		PmergeMe(char **av, int ac);
		~PmergeMe();
};

#endif
