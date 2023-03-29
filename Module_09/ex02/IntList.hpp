/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IntList.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 10:36:21 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/29 15:06:25 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTLIST_HPP
# define INTLIST_HPP

#include <list>

class IntList: public std::list<int> {
	private:
		long _time_to_sort;
		
	public:
		IntList();
		IntList(const IntList& other);
		~IntList();
		
		IntList& operator=(const IntList& other);

		// void sort(void);
		void print(void);
		bool has_duplicate(void);
		// long get_sorting_time(void);
};

#endif
