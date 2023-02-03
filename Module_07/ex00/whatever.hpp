/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 17:33:04 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 17:48:27 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T& x, T& y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <class T>
T min(T x, T y) {
    if (x < y)
        return (x);
    return (y);
}

template <class T>
T max(T x, T y) {
    if (x > y)
        return (x);
    return (y);
}


#endif
