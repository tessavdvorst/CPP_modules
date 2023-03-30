/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:12:01 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 15:01:21 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// • Your program must be able to use a positive integer sequence as argument.
// • Your program must use a merge-insert sort algorithm to sort the positive integer
// sequence.
// • If an error occurs during program execution, an error message should be displayed
// on the standard output.
// You must use at least two different containers in your code to
// validate this exercise. Your program must be able to handle at
// least 3000 different integers.

// $> ./PmergeMe 3 5 9 7 4
// Before: 3 5 9 7 4
// After: 3 4 5 7 9
// Time to process a range of 5 elements with std::[..] : 0.00031 us
// Time to process a range of 5 elements with std::[..] : 0.00014 us
// $> ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
// Before: 141 79 526 321 [...]
// After: 79 141 321 526 [...]
// Time to process a range of 3000 elements with std::[..] : 62.14389 us
// Time to process a range of 3000 elements with std::[..] : 69.27212 us
// $> ./PmergeMe "-1" "2"
// Error
// $> # For OSX USER:
// $> ./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`
// [...]

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "Error: nothing to be sorted\n";
	else
	{
		// IntDeque d;
		IntList l;
		try {
			store_args(argc, argv, &l);//, &d);
			std::cout << "Before: ";
			l.print();
			// l.sort();
			// d.sort();
			// std::cout << "After: ";
			// l.print();
			// print_time(argc - 1, "list", l.get_sorting_time());
			// print_time(argc - 1, "deque", d.get_sorting_time());
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return (0);
}
