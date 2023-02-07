/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/04 18:48:30 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/05 16:50:51 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#  define ITER_HPP

#include <iostream>

template <typename T>
void printVal(const T& value)
{
    std::cout << value << "\n";
}

template <typename T>
void iter(T* arr, int length, void(*func)(const T& value))
{
    std::cout << "Address of array = " << arr << "\n";
    std::cout << "Length of array = " << length << "\n";
    for (int i = 0; i < length; i++)
        func(arr[i]);
}

#endif
