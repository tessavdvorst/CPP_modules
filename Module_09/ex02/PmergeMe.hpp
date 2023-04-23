/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:12:05 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/04/23 22:52:50 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <sys/time.h>
#include <list>
#include <deque>

#define K 5

template <typename T>
bool check_duplicate(T list)
{
	typename T::iterator i = list.begin();
	for (; i != list.end(); i++) {
		typename T::iterator j = i;
		for (j++; j != list.end(); j++) {
			if (*i == *j)
				return (true);
		}
	}
	return (false);
}

template <typename T>
void print_container(T container)
{
	typename T::iterator it = container.begin();
	for (; it != container.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
}

template <typename T>
void fill(T container, T* new_container, int start, int end)
{
	typename T::iterator it_start = container.begin();
	std::advance(it_start, start);
	typename T::iterator it_end = container.begin();
	std::advance(it_end, end + 1);
	new_container->insert(new_container->end(), it_start, it_end);
}

template <typename T>
void insert_sort(T* container) 
{
	std::cout << "insert:";
	typename T::iterator it = container->begin();
	for (; it != container->end(); ++it)
	{
		int temp = *it;
		typename T::iterator insertionPoint = container->begin();
		while (insertionPoint != it && *insertionPoint < temp) {
			++insertionPoint;
		}
		typename T::iterator j = it;
		for (; j != insertionPoint; --j) {
			typename T::iterator prev = j;
			prev--;
			*j = *prev;
		}
		*insertionPoint = temp;
	}
}

template <typename T>
void merge_sort(T* container, int p, int q, int r)
{
	T left;
	T right;
	
	std::cout << "merged:";
	fill(*container, &left, p, q);
	fill(*container, &right, q + 1, r);
	
	//erase contents list
	container->erase(container->begin(), container->end());
	
	//merge left & right into list
	typename T::iterator left_it = left.begin();
	typename T::iterator right_it = right.begin();
	while (left_it != left.end() && right_it != right.end())
	{
		if (*left_it < *right_it)
		{
			container->push_back(*left_it);
			*left_it++;
		}
		else
		{
			container->push_back(*right_it);
			*right_it++;
		}
	}
	
	while (left_it != left.end())
	{
		container->push_back(*left_it);
		*left_it++;
	}
	
	while (right_it != right.end())
	{
		container->push_back(*right_it);
		*right_it++;
	}
}

template <typename T>
void merge_insert_sort(T* container, int p, int r)
{
	if (r - p > K)
	{
		int q = (r - p) / 2;
		std::cout << "left:";
		merge_insert_sort(container, p, q);
		std::cout << "\n";
		std::cout << "right:";
		merge_insert_sort(container, q + 1, r);
		std::cout << "\n";
		merge_sort(container, p, q, r);
		std::cout << "\n";
	}
	else
	{	
		insert_sort(container);
		std::cout << "\n";
	}
}

template <typename T>
void print_time(int count, std::string container_type, void (*f)(T* container, int p, int r), T* container, int p, int r)
{
	struct timeval start, end;
	
	std::cout << "Time to process a range of " << count << " elements ";
	std::cout << "with std::" << container_type;
    
	gettimeofday(&start, NULL);
    f(container, p, r);
    gettimeofday(&end, NULL);
	
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed_time = static_cast<double>(seconds) + static_cast<double>(microseconds) / 1000000.0;
	
	std::cout << " : " << std::fixed << elapsed_time << " us\n";
}

int convert_to_int(char *input);
void store_args(int argc, char **argv, std::list<int> *l, std::deque<int> *d);


#endif

