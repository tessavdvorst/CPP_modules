/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IntList.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 10:36:21 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 15:06:29 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTLIST_HPP
# define INTLIST_HPP

#include <list>

#define K 5

class IntList: public std::list<int> {
	private:
		long _time_to_sort;
		
	public:
		IntList();
		IntList(const IntList& other);
		~IntList();
		
		IntList& operator=(const IntList& other);

		// void merge_sort(void);
		// void insert_sort(void);
		void merge_insert_sort(void);
		
		void print(void);
		bool has_duplicate(void);
		// long get_sorting_time(void);
};

#endif
