/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:23:01 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/04/23 22:53:42 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "Error: nothing to be sorted\n";
	else
	{
		std::deque<int> d;
		std::list<int> l;
		try {
			store_args(argc, argv, &l, &d);
			std::cout << "Before (list): ";
			print_container(l);
			// std::cout << "Before (deque): ";
			// print_container(d);
			// print_time(argc - 1, "list", merge_insert_sort, &l, 0, l.size() - 1);
			// print_time(argc - 1, "deque", merge_insert_sort, &d, 0, d.size() - 1);
			merge_insert_sort(&l, 0, l.size() - 1);
			std::cout << "After (list): ";
			print_container(l);
			// std::cout << "After (deque): ";
			// print_container(d);
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return (0);
}
