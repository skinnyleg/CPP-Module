/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:54:46 by hmoubal           #+#    #+#             */
/*   Updated: 2023/05/01 15:18:22 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::parseNumbers(char **av, int ac)
{
    int numCount = ac;
    int countPlus = 0;
    int i = 1;
    std::string numstr;
    while (i < numCount)
    {
        numstr.assign(av[i]);
        if (numstr.size() == 1 && numstr[0] == '+')
                throw(std::runtime_error("Error2"));
        countPlus = 0;
        for (size_t j = 0; j < numstr.size(); j++)
        {
            if (isdigit(numstr[j]) == 0 && numstr[j] != '+')
                throw(std::runtime_error("Error"));
            if (numstr[j] == '+')
                countPlus++;
            if (countPlus > 1)
                throw(std::runtime_error("Error"));
        }
        i++;
    }
}

void PmergeMe::fillContainers(char **av, int ac)
{
    int numCount = ac;
    int i = 1;
    size_t value = 0;
    std::string numstr;
    while (i < numCount)
    {
        numstr.assign(av[i]);
        value = stoul(numstr);
        vec.push_back(value);
        unsorted.push_back(value);
        deq.push_back(value);
        i++;
    }
}

void PmergeMe::InsertSortVector(Vector &arr)
{
    int j = 0;
    for (size_t i = 1; i < arr.size(); i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            size_t tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

Vector MergeVector(Vector arr1, Vector arr2)
{
    Vector ret;
    
    while (!arr1.empty() && !arr2.empty())
    {
        if (arr1[0] > arr2[0])
        {
            ret.push_back(arr2[0]);
            arr2.erase(arr2.begin());
        }
        else
        {
            ret.push_back(arr1[0]);
            arr1.erase(arr1.begin());
        }
    }

    while (!arr1.empty())
    {
        ret.push_back(arr1[0]);
        arr1.erase(arr1.begin());
    }
    
    while (!arr2.empty())
    {
        ret.push_back(arr2[0]);
        arr2.erase(arr2.begin());
    }

    return (ret);
}

Vector PmergeMe::MergeSortVector(Vector arr)
{
    if (arr.size() <= 20)
    {
        InsertSortVector(arr);
        return (arr);
    }
    Vector arr1;
    Vector arr2;
    arr1.insert(arr1.begin(), arr.begin() , arr.begin() + (arr.size() / 2));
    arr2.insert(arr2.begin(), arr.begin() + (arr.size() / 2) , arr.end());

    arr1 = MergeSortVector(arr1);
    arr2 = MergeSortVector(arr2);
    return (MergeVector(arr1, arr2));
}

void checkSorted(Vector vec)
{
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            std::cout << "vector not sorted correctly" << std::endl;
            return ;
        }
    }
    std::cout << "vector sorted correctly" << std::endl;
}

void PmergeMe::sortVector()
{
	tVec = clock();
    this->vec = MergeSortVector(this->vec);
	tVec = clock() - tVec;
}

void PmergeMe::InsertSortDeque(Deque &arr)
{
    int j = 0;
    for (size_t i = 1; i < arr.size(); i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            size_t tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

Deque MergeDeque(Deque arr1, Deque arr2)
{
    Deque ret;
    
    while (!arr1.empty() && !arr2.empty())
    {
        if (arr1[0] > arr2[0])
        {
            ret.push_back(arr2[0]);
            arr2.erase(arr2.begin());
        }
        else
        {
            ret.push_back(arr1[0]);
            arr1.erase(arr1.begin());
        }
    }

    while (!arr1.empty())
    {
        ret.push_back(arr1[0]);
        arr1.erase(arr1.begin());
    }
    
    while (!arr2.empty())
    {
        ret.push_back(arr2[0]);
        arr2.erase(arr2.begin());
    }

    return (ret);
}

Deque PmergeMe::MergeSortDeque(Deque arr)
{
    if (arr.size() <= 20)
    {
        InsertSortDeque(arr);
        return (arr);
    }
    Deque arr1;
    Deque arr2;
    arr1.insert(arr1.begin(), arr.begin() , arr.begin() + (arr.size() / 2));
    arr2.insert(arr2.begin(), arr.begin() + (arr.size() / 2) , arr.end());

    arr1 = MergeSortDeque(arr1);
    arr2 = MergeSortDeque(arr2);
    return (MergeDeque(arr1, arr2));

}

void checkSorted(Deque vec)
{
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            std::cout << "deque not sorted correctly" << std::endl;
            return ;
        }
    }
    std::cout << "deque sorted correctly" << std::endl;
}

void PmergeMe::sortDeque()
{
	tDeq = clock();
    this->deq = MergeSortDeque(this->deq);
	tDeq = clock() - tDeq;
}

void PmergeMe::PrintOutput()
{
	std::cout << "Before: ";
	for (size_t i = 0; i < unsorted.size(); i++)
		std::cout << unsorted[i] << " ";
	std::cout << std::endl;
	std::cout << "After:  ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	double timeVec = ((float)tVec / CLOCKS_PER_SEC) * 1000000;
	double timeDeq = ((float)tDeq / CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of  " << vec.size() << " elements with std::vector :  "  << timeVec << " us"<< std::endl;
	std::cout << "Time to process a range of  " << deq.size() << " elements with std::deque  :  " << timeDeq << " us" << std::endl;
}
        
PmergeMe::PmergeMe(char **av, int ac)
{
    parseNumbers(av, ac);
    fillContainers(av, ac);
    sortVector();
    sortDeque();
	PrintOutput();
}

PmergeMe::~PmergeMe()
{

}

void PmergeMe::PrintVector()
{
    std::cout << "///// Vector array //////" << std::endl;
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << "vec[" << i << "] == " << vec[i] << std::endl;
}

void PmergeMe::PrintDeque()
{
    std::cout << "///// Deque array //////" << std::endl;
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << "deq[" << i << "] == " << deq[i] << std::endl;
}
