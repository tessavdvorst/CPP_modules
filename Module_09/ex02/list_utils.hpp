/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_utils.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:26:37 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 19:49:27 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_UTILS_HPP
# define LIST_UTILS_HPP

#include <list>

#define K 5

void insert_sort(std::list<int>* list);
void merge_sort(std::list<int>* list, int p, int q, int r);
void merge_insert_sort(std::list<int>* list, int p, int r);

#endif
