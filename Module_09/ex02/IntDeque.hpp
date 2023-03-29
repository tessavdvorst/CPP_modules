/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IntDeque.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 10:35:03 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/29 14:42:42 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTDEQUE_HPP
# define INTDEQUE_HPP

#include <deque>

class IntDeque: public std::deque<int> {
	private:
		long _time_to_sort;
		
	public:
		IntDeque(): std::deque<int>() {};
		IntDeque(const IntDeque& other): std::deque<int>(other) {};
		~IntDeque() {};
		
		IntDeque& operator=(const IntDeque& other) { std::deque<int>::operator=(other); return (*this); };
		
		// void sort(void);
		void print(void);
		// long get_sorting_time(void);
};

#endif
