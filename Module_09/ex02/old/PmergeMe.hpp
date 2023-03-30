/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:12:05 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/30 15:03:23 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include "IntDeque.hpp"
#include "IntList.hpp"

#define K 5

bool check_duplicates(char **input, int size);
int convert_to_int(char *input);
void store_args(int argc, char **argv, IntList *l);//, MyDeque<int> *d);
// void sort_containers(int count, MyList *l);//, MyDeque<int> *d);
// void print_time(int count, std::string container_type, long time);

#endif
