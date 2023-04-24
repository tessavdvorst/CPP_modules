/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:24:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/04/23 22:12:23 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int convert_to_int(char *input)
{
	int i;
	char *pEnd;
	
	long int int_val = strtol(input, &pEnd, 10);
    if (*pEnd != '\0' || (int_val < INT_MIN || int_val > INT_MAX))
	{
		std::cout << "hi\n";
		throw std::runtime_error("invalid input");
	}
    i = static_cast<int>(int_val);
	return (i);
}

void store_args(int argc, char **argv, std::list<int> *l, std::deque<int> *d)
{
	for (int i = 1; i < argc; i++)
	{
		int val = convert_to_int(argv[i]);
		if (val < 0)
			throw std::runtime_error("negative value");
		l->push_back(val);
		d->push_back(val);
	}
	// if (check_duplicate(*l) || check_duplicate(*d))
	// 	throw std::runtime_error("duplicate");
}
