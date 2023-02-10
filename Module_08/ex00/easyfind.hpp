/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 11:02:48 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/10 11:37:39 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T container, const int num) {
	typename T::iterator iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
		throw std::exception();
	return (iter);
}

#endif
