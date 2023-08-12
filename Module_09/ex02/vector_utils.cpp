/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_utils.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/08 20:47:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/08/12 22:23:09 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector_utils.hpp"
#include "utils.hpp"
#include <iostream>

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
		pairs[j + 1] = pairs[j];
		j--;
	}
	pairs[j + 1] = last;
}

int jacobsthal(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
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

void VectorSplitPairs(std::vector<int>& main, std::vector<int>& pend, std::vector<pair> pairs)
{
	for (int i = 0; i < static_cast<int>(pairs.size()); i++)
	{
		main.push_back(pairs[i].second);
		pend.push_back(pairs[i].first);
	}

	// we know for sure the smallest element in pend is smaller than the smallest element in main
	// because they used to be a pair
	main.insert(main.begin(), pend[0]);
}

void VectorInsert(std::vector<int>& v, int n)
{
	std::vector<int>::iterator iterator = std::lower_bound(v.begin(), v.end(), n);
	int insertion_point = std::distance(v.begin(), iterator);
	v.insert(v.begin() + insertion_point, n);
}

std::vector<int> VectorMergeSortPairs(std::vector<pair> pair_vec, int straggler)
{
	std::vector<int> main;
	std::vector<int> pend;
	
	VectorSplitPairs(main, pend, pair_vec);
	
	int it = 1;
	int jacob_index = 3;
	std::vector<int> index_sequence;
	bool jacob = false;
	index_sequence.push_back(1);

	std::vector<int> jacob_sequence = VectorGenerateJacobsthalSequence(pend);

	while (it <= static_cast<int>(pend.size()))
	{
		int item;
		if (jacob_sequence.size() != 0 && !jacob)
		{
			index_sequence.push_back(jacob_sequence[0]);
			item = pend[(jacob_sequence[0]) - 1];
			jacob_sequence.pop_back();
			jacob = true;
		}
		else {
			std::vector<int>::iterator iterator = std::find(index_sequence.begin(), index_sequence.end(), it);
			if (it == 0 || iterator != index_sequence.end())
				it++;
			item = pend[it - 1];
			index_sequence.push_back(it);
			jacob = false;
		}
		
		VectorInsert(main, item);

		it++;
		jacob_index++;
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
	PrintContainer(sorted_vec);
	return sorted_vec;
}
