// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        ::::::::            */
// /*   list_utils.cpp                                     :+:    :+:            */
// /*                                                     +:+                    */
// /*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
// /*                                                   +#+                      */
// /*   Created: 2023/03/30 15:25:35 by tvan-der      #+#    #+#                 */
// /*   Updated: 2023/07/22 14:26:56 by Tessa         ########   odam.nl         */
// /*                                                                            */
// /* ************************************************************************** */

// #include "list_utils.hpp"
// #include <iostream>

// void list_fill(std::list<int> list, std::list<int>* new_list, int start, int end)
// {
// 	std::list<int>::iterator it_start = list.begin();
// 	std::advance(it_start, start);
// 	std::list<int>::iterator it_end = list.begin();
// 	std::advance(it_end, end + 1);
// 	new_list->insert(new_list->end(), it_start, it_end);
// }

// void list_insert_sort(std::list<int> *l, int begin, int end)
// {
// 	for (std::list<int>::iterator it = l->begin(); it != l->end(); ++it)
// 	{
// 		int key = *it;
// 		std::list<int>::iterator insertionPoint = l->begin();
// 		while (insertionPoint != it && *insertionPoint < key) {
// 			++insertionPoint;
// 		}
// 		for (std::list<int>::iterator j = it; j != insertionPoint; --j) {
// 			std::list<int>::iterator prev = j;
// 			prev--;
// 			*j = *prev;
// 		}
// 		*insertionPoint = key;
// 	}
// }

// void list_merge_sort(std::list<int>* l, int p, int q, int r)
// {
// 	std::list<int> left, right;
	
// 	list_fill(*l, &left, p, q);
// 	list_fill(*l, &right, q + 1, r);
	
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

// void list_merge_insert_sort(std::list<int> *l, int begin, int end)
// {
// 	print_container(*l);
// 	std::cout << "begin = " << begin << " and end = " << end << '\n';
// 	if (end - begin > K)
// 	{
// 		int middle = (end - begin) / 2;
// 		list_merge_insert_sort(l, begin, middle);
// 		// print_container(*l);
// 		list_merge_insert_sort(l, middle + 1, end);
// 		// print_container(*l);
// 		list_merge_sort(l, begin, middle, end);
// 	}
// 	else
// 		list_insert_sort(l, begin, end);
// }
