/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_utils.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/08 20:47:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/08/15 19:55:20 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "vector_utils.hpp"

std::vector<pair> VectorCreatePairs(std::vector<int> v)
{
	std::vector<pair> splitted;

	for (size_t i = 0; i < v.size(); i += 2)
	{
		if (i + 1 < v.size()) {
			pair p = std::make_pair(v[i], v[i + 1]);
			splitted.push_back(p);
		}
	}
	return splitted;
}

void VectorSortPairs(std::vector<pair >& pairs)
{
	for (int i = 0; i < static_cast<int>(pairs.size()); i++)
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
}

void VectorInsertSortPairs(std::vector<pair>& pairs, int size)
{
	if (size <= 1)
		return ;
		
	VectorInsertSortPairs(pairs, size - 1);
	
	pair last = pairs[size - 1];
	int j = size - 2;

	while (j >= 0 && pairs[j].second > last.second)
	{
		std::swap(pairs[j], pairs[j + 1]);
		j--;
	}
}

std::vector<int> VectorGenerateJacobsthalSequence(std::vector<int> v)
{
	int size = v.size();
	std::vector<int> sequence;
	int jacob_index = 3;
	
	while (jacobsthal(jacob_index) < size - 1)
	{
		sequence.push_back(jacobsthal(jacob_index));
		jacob_index += 1;
	}
	return sequence;
}

void VectorInsert(std::vector<int>& v, int n)
{
	std::vector<int>::iterator iterator = std::lower_bound(v.begin(), v.end(), n);
	v.insert(iterator, n);
}

void VectorSplitPairs(std::vector<int>& main, std::vector<int>& pend, std::vector<pair> pairs)
{
	for (int i = 0; i < static_cast<int>(pairs.size()); i++)
	{
		main.push_back(pairs[i].second);
		pend.push_back(pairs[i].first);
	}

	main.insert(main.begin(), pend[0]);
}

std::vector<int> VectorMergeSortPairs(std::vector<pair> pair_vec, int straggler)
{
	int it = 0;
	int index = 0;
	int jacob_index = 1;
	std::vector<int> main;
	std::vector<int> pend;
	
	VectorSplitPairs(main, pend, pair_vec);
	int pend_size = pend.size();

	std::vector<int> jacob_sequence = VectorGenerateJacobsthalSequence(pend);

	while (it <= static_cast<int>(jacob_sequence.size()))
	{
		if (it == static_cast<int>(jacob_sequence.size()) && pend_size > it)
			index = pend_size;
		else
			index = jacob_sequence[it];
		while (index > jacob_index)
		{
			int item = pend[index - 1];
			VectorInsert(main, item);
			index--;
		}
		if (it < static_cast<int>(jacob_sequence.size()))
			jacob_index = jacob_sequence[it];
		it++;
	}
	
	if (straggler != -1)
		VectorInsert(main, straggler);
		
	return main;
}

std::vector<int> VectorMergeInsertSort(std::vector<int> v)
{
	int straggler = -1;
	
	if (v.size() % 2 != 0)
	{
		straggler = v.back();
		v.pop_back();
	}
	
	std::vector<pair> splitted_vec = VectorCreatePairs(v);
	VectorSortPairs(splitted_vec);
	VectorInsertSortPairs(splitted_vec, splitted_vec.size());
	std::vector<int> sorted_vec = VectorMergeSortPairs(splitted_vec, straggler);
	return sorted_vec;
}
