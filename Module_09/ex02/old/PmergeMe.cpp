/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:12:03 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/29 15:26:18 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Here are some additional guidelines on the information you should display line by line
// on the standard output
// • On the first line you must display an explicit text followed by the unsorted positive
// integer sequence.
// • On the second line you must display an explicit text followed by the sorted positive
// integer sequence.
// • On the third line you must display an explicit text indicating the time used by
// your algorithm by specifying the first container used to sort the positive integer
// sequence.
// • On the last line you must display an explicit text indicating the time used by
// your algorithm by specifying the second container used to sort the positive integer
// sequence.

int convert_to_int(char *input)
{
	int i;
	char *pEnd;
	
	long int int_val = strtol(input, &pEnd, 10);
    if (*pEnd != '\0' || (int_val < INT_MIN || int_val > INT_MAX))
		throw std::runtime_error("invalid input");
    i = static_cast<int>(int_val);
	return (i);
}

void store_args(int argc, char **argv, IntList *l)//, IntDeque *d)
{
	for (int i = 1; i < argc; i++)
	{
		int val = convert_to_int(argv[i]);
		l->insert(l->end(), val);
		// d->insert(val);
	}
	if (l->has_duplicate())
		throw std::runtime_error("duplicate");
}

// void print_time(int count, std::string container_type, long time)
// {
// 	std::cout << "Time to process a range of " << count << " elements ";
// 	std::cout << "with std::" << container_type;
// 	std::cout << " : " << time << " us\n";
// }
