/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:12:05 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 17:34:34 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <exception>
#include "list_utils.hpp"
#include "deque_utils.hpp"

#define K 5

template <typename T>
bool check_duplicate(T list)
{
	typename T::iterator i = list.begin();
	for (; i != list.end(); i++) {
		typename T::iterator j = i;
		for (j++; j != list.end(); j++) {
			if (*i == *j)
				return (true);
		}
	}
	return (false);
}

template <typename T>
void print_container(T container)
{
	typename T::iterator it = container.begin();
	for (; it != container.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
}


int convert_to_int(char *input);
void store_args(int argc, char **argv, std::list<int> *l, std::deque<int> *d);

// long get_execution_time()
// void print_time(int count, std::string container_type, long time);

#endif

