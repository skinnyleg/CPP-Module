/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:54:46 by hmoubal           #+#    #+#             */
/*   Updated: 2023/04/29 18:20:12 by hmoubal          ###   ########.fr       */
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
            std::cout << "not sorted correctly" << std::endl;
            return ;
        }
    }
    std::cout << "sorted correctly" << std::endl;
}

void PmergeMe::sortVector()
{
    this->vec = MergeSortVector(this->vec);
    PrintVector();
    checkSorted(this->vec);
}

void PmergeMe::InsertSortDeque()
{
    int j = 0;
    for (size_t i = 1; i < deq.size(); i++)
    {
        j = i;
        while (j > 0 && deq[j - 1] > deq[j])
        {
            size_t tmp = deq[j];
            deq[j] = deq[j - 1];
            deq[j - 1] = tmp;
            j--;
        }
    }
}

void PmergeMe::MergeSortDeque()
{

}

void PmergeMe::sortDeque()
{
    InsertSortDeque();
    PrintDeque();
}

        
PmergeMe::PmergeMe(char **av, int ac)
{
    parseNumbers(av, ac);
    fillContainers(av, ac);
    sortVector();
    // sortDeque();
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
