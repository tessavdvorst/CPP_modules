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

#include "utils.hpp"
#include "list_utils.hpp"

std::list<pair> ListCreatePairs(std::list<int> l)
{
	std::list<pair> splitted;
	std::list<int>::iterator it = l.begin();

	while (it != l.end())
	{
		int first = *it;
		it++;
		if (it != l.end())
		{
			int second = *it;
			pair p = std::make_pair(first, second);
			splitted.push_back(p);
		}
		it++;
	}
	return splitted;
}

void ListSortPairs(std::list<pair>& splitted)
{
	std::list<pair>::iterator it = splitted.begin();

	for (; it != splitted.end(); it++)
	{
		if ((*it).first > (*it).second)
			std::swap((*it).first, (*it).second);
	}
}

void ListInsertSortPairs(std::list<pair>& pairs, std::list<pair>::iterator it)
{
	if (it == pairs.begin())
		return;

	ListInsertSortPairs(pairs, std::prev(it));

	pair last = *(it);
	std::list<pair>::iterator j = std::prev((it));
	while (j != pairs.begin() && j->second > last.second) {
		std::swap(*(j), *(std::next(j)));
		j--;
	}
	if (j == pairs.begin() && j->second > last.second)
		std::swap(*(j), *(std::next(j)));
}

std::list<int> ListGenerateJacobsthalSequence(std::list<int> l)
{
	int size = l.size();
	std::list<int> sequence;
	int jacob_index = 3;
	
	while (jacobsthal(jacob_index) < size - 1)
	{
		sequence.push_back(jacobsthal(jacob_index));
		jacob_index += 1;
	}
	return sequence;
}

void ListSplitPairs(std::list<int>& main, std::list<int>& pend, std::list<pair> pairs)
{
	std::list<pair >::iterator it = pairs.begin();
	for (; it != pairs.end(); it++)
	{
		main.push_back((*it).second);
		pend.push_back((*it).first);
	}

	main.insert(main.begin(), pend.front());
}

void ListInsert(std::list<int>& l, int n)
{
	std::list<int>::iterator iterator = std::lower_bound(l.begin(), l.end(), n);
	l.insert(iterator, n);
}

std::list<int> ListMergeSortPairs(std::list<pair> pair_list, int straggler)
{
	int index = 0;
	int jacob_index = 1;
	std::list<int> main;
	std::list<int> pend;

	ListSplitPairs(main, pend, pair_list);
	int pend_size = pend.size();

	std::list<int> jacob_sequence = ListGenerateJacobsthalSequence(pend);
	std::list<int>::iterator it_jacob = jacob_sequence.begin();
	while (it_jacob != jacob_sequence.end())
	{
		index = *it_jacob;
		while (index > jacob_index)
		{
			std::list<int>::iterator it_p = pend.begin();
			std::advance(it_p, index - 1);
			int item = *it_p;
			ListInsert(main, item);
			index--;
		}
		jacob_index = *it_jacob;
		it_jacob++;
	}

	if (it_jacob == jacob_sequence.end())
	{
		for (int i = pend_size; i > jacob_index; i--)
		{
			std::list<int>::iterator it_p = pend.begin();
			std::advance(it_p, i - 1);
			int item = *it_p;
			ListInsert(main, item);
		}
	}

	if (straggler != -1)
		ListInsert(main, straggler);

	return main;
}

std::list<int> ListMergeInsertSort(std::list<int> l)
{
	int straggler = -1;
	
	if (l.size() % 2 != 0)
	{
		straggler = l.back();
		l.pop_back();
	}
	
	std::list<pair> splitted_list = ListCreatePairs(l);
	ListSortPairs(splitted_list);
	ListInsertSortPairs(splitted_list, std::prev(splitted_list.end()));
	std::list<int> sorted_list = ListMergeSortPairs(splitted_list, straggler);
	return sorted_list;
}