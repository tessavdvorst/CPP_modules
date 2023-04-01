/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_utils.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:25:35 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/04/01 18:53:28 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "list_utils.hpp"
#include <iostream>

// void fill(std::list<int> list, std::list<int>* new_list, int start, int end)
// {
// 	std::list<int>::iterator it_start = list.begin();
// 	std::advance(it_start, start);
// 	std::list<int>::iterator it_end = list.begin();
// 	std::advance(it_end, end + 1);
// 	new_list->insert(new_list->end(), it_start, it_end);
// }

// void insert_sort(std::list<int>* list) 
// {
// 	for (std::list<int>::iterator it = list->begin(); it != list->end(); ++it)
// 	{
// 		int temp = *it;
// 		std::list<int>::iterator insertionPoint = list->begin();
// 		while (insertionPoint != it && *insertionPoint < temp) {
// 			++insertionPoint;
// 		}
// 		for (std::list<int>::iterator j = it; j != insertionPoint; --j) {
// 			std::list<int>::iterator prev = j;
// 			prev--;
// 			*j = *prev;
// 		}
// 		*insertionPoint = temp;
// 	}
// }

// void merge_sort(std::list<int>* l, int p, int q, int r)
// {
// 	std::list<int> left, right;
	
// 	fill(*l, &left, p, q);
// 	fill(*l, &right, q + 1, r);
	
// 	//erase contents list
// 	l->erase(l->begin(), l->end());
	
// 	//merge left & right into list
// 	std::list<int>::iterator left_it = left.begin();
// 	std::list<int>::iterator right_it = right.begin();
// 	while (left_it != left.end() && right_it != right.end())
// 	{
// 		if (*left_it < *right_it)
// 		{
// 			l->push_back(*left_it);
// 			*left_it++;
// 		}
// 		else
// 		{
// 			l->push_back(*right_it);
// 			*right_it++;
// 		}
// 	}
	
// 	while (left_it != left.end())
// 	{
// 		l->push_back(*left_it);
// 		*left_it++;
// 	}
	
// 	while (right_it != right.end())
// 	{
// 		l->push_back(*right_it);
// 		*right_it++;
// 	}
// }

// void merge_insert_sort(std::list<int>* list, int p, int r)
// {
// 	if (r - p > K)
// 	{
// 		int q = (r - p) / 2;
// 		merge_insert_sort(list, p, q);
// 		merge_insert_sort(list, q + 1, r);
// 		merge_sort(list, p, q, r);
// 	}
// 	else
// 		insert_sort(list);
// }
