/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:12:05 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/08/12 22:32:59 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <sys/time.h>
#include <list>
#include <vector>

typedef std::pair<int, int> pair;

template <typename T>
void PrintContainer(T container)
{
	typename T::iterator it = container.begin();
	for (; it != container.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
}

int ConvertToInt(char *input);
void StoreArgs(int argc, char **argv, std::list<int> *l, std::vector<int> *v);
void PrintTime(int size, struct timeval start, struct timeval end, std::string container_type);


#endif

