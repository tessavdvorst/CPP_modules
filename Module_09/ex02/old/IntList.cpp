/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IntList.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 14:33:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 15:17:54 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "IntList.hpp"
#include <iostream>
#include <unordered_set>

IntList::IntList(): std::list<int>() {}

IntList::IntList(const IntList& other): std::list<int>(other)
{
	*this = other;
}

IntList::~IntList() {}

IntList& IntList::operator=(const IntList& other)
{
	this->_time_to_sort = other._time_to_sort;
	return (*this);
}

// void IntList::merge_sort(void);
// void IntList::insert_sort(void);
void IntList::merge_insert_sort(void)
{
	if (this->size() - 1 > K)
	{
		merge_insert_sort();
		merge_insert_sort();
		merge_sort();
	}
	else
		insert_sort();
}

void IntList::print(void)
{
	std::list<int>::iterator it = this->begin();
	for (; it != this->end(); it++)
	std::cout << *it << ' ';
	std::cout << '\n';
}

bool IntList::has_duplicate(void)
{
	std::unordered_set<int> tempSet(this->begin(), this->end());
	if (this->size() == tempSet.size())
		return (false);
	return (true);
}

// long IntList::get_sorting_time(void)
// {
	// return (this->_time_to_sort);
// }
