/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:23:01 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 19:49:44 by tvan-der      ########   odam.nl         */
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
			merge_insert_sort(&l);
			// d.sort();
			std::cout << "After (list): ";
			print_container(l);
			// print_time(argc - 1, "list", l.get_sorting_time());
			// print_time(argc - 1, "deque", d.get_sorting_time());
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return (0);
}
