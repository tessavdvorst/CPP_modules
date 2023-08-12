/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:23:01 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/08/12 22:31:23 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "list_utils.hpp"
#include "vector_utils.hpp"

/*
This sorting technique combines merging (like in merge-sort) and binary-search-insertion (like in insertion-sort),
but, it is able to achieve better worst-case performance by selecting which elements to compare,
as a result of this it will maximize the efficiency and decreases the time compleity of algorithm.
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "Error: nothing to be sorted\n";
	else
	{
		std::vector<int> v;
		std::list<int> l;
		try {
			StoreArgs(argc, argv, &l, &v);
			std::cout << "Before: ";
			PrintContainer(v);
			
			struct timeval start, end;
			gettimeofday(&start, NULL);
			std::vector<int> sorted_vec = VectorMergeInsertSort(v);
			gettimeofday(&end, NULL);
			
			std::cout << "After: ";
			PrintContainer(sorted_vec);
			
			PrintTime(v.size(), start, end, "vector");
			// gettimeofday(&start, NULL);
			// std::list<int> sorted_vec = ListMergeInsertSort(l);
			// gettimeofday(&end, NULL);
			// PrintTime(l.size(), start, end, "list");

		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return (0);
}
