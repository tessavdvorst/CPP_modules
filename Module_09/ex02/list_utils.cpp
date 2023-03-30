/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_utils.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:25:35 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 20:23:13 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "list_utils.hpp"
#include <iostream>

void fill(std::list<int> list, std::list<int>* new_list, int start, int end)
{
	std::list<int>::iterator it_start = list.begin();
	std::advance(it_start, start);
	std::list<int>::iterator it_end = list.begin();
	std::advance(it_end, end + 1);
	new_list->insert(new_list->end(), it_start, it_end);
}

void insert_sort(std::list<int>* list) 
{
	for (std::list<int>::iterator it = list->begin(); it != list->end(); ++it)
	{
		int temp = *it;
		std::list<int>::iterator insertionPoint = list->begin();
		while (insertionPoint != it && *insertionPoint < temp) {
			++insertionPoint;
		}
		for (std::list<int>::iterator j = it; j != insertionPoint; --j) {
			*j = *(std::prev(j));
		}
		*insertionPoint = temp;
	}
}

void merge_sort(std::list<int>* list, int p, int q, int r)
{
	std::list<int> left, right;
	fill(*list, &left, p, q);
	fill(*list, &right, q + 1, r);
	
}

void merge_insert_sort(std::list<int>* list, int p, int r)
{
	if (r - p > K)
	{
		int q = (r - p) / 2;
		merge_insert_sort(list, p, q);
		merge_insert_sort(list, q + 1, r);
		merge_sort(list, p, q, r);
	}
	else
		insert_sort(list);
}
