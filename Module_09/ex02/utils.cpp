/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:24:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/08/14 20:36:40 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int ConvertToInt(char *input)
{
	int i;
	char *pEnd;
	
	long int int_val = strtol(input, &pEnd, 10);
	if (*pEnd != '\0' || (int_val < INT_MIN || int_val > INT_MAX))
		throw std::runtime_error("invalid input");
	i = static_cast<int>(int_val);
	return (i);
}

void StoreArgs(int argc, char **argv, std::list<int> *l, std::vector<int> *v)
{
	for (int i = 1; i < argc; i++)
	{
		int val = ConvertToInt(argv[i]);
		if (val < 0)
			throw std::runtime_error("negative value");
		l->push_back(val);
		v->push_back(val);
	}
}

int jacobsthal(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void PrintTime(int size, struct timeval start, struct timeval end, std::string container_type)
{
	std::cout << "Time to process a range of " << size << " elements ";
	std::cout << "with std::" << container_type;
	
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	double elapsed_time = static_cast<double>(seconds) + static_cast<double>(microseconds) / 1000000.0;
	
	std::cout << " : " << std::fixed << elapsed_time << " us\n";
}