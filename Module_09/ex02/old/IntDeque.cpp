/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IntDeque.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 14:37:52 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/29 15:27:35 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "IntDeque.hpp"
#include <iostream>

// IntDeque::IntDeque() {}

// IntDeque::IntDeque(const IntDeque& other)
// {
// 	*this = other;
// }

// IntDeque::~IntDeque() {}


// IntDeque& IntDeque::operator=(const IntDeque& other)
// {
// 	this->_time_to_sort = other._time_to_sort;
// 	return (*this);
// }


// void IntDeque::sort(void)
// {
	
// }

void IntDeque::print(void)
{
	std::deque<int>::iterator it = this->begin();
	for (; it != this->end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
}

// long IntDeque::get_sorting_time(void)
// {
	// return (this->_time_to_sort);
// }
