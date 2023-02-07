/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 17:33:04 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/04 18:50:29 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& x, T& y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <typename T>
const T& min(const T& x, const T& y) {
    return (x <= y ? x : y);
}

template <typename T>
const T& max(const T& x, const T& y) {
    return (x >= y ? x : y);
}

#endif
