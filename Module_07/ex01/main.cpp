/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/04 18:48:48 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/05 16:50:14 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int intArr[3] = {1,2,3};
    iter(intArr, 3, &printVal);
    std::cout << "\n";
    
    float floatArr[3] = {0.1,0.42,0.333};
    iter(floatArr, 3, &printVal);
    std::cout << "\n";
    
    char charArr[4] = {'a','b','c','d'};
    iter(charArr, 4, &printVal);
    std::cout << "\n";
    
    std::string strArr[5] = {"hello", "hi", "hee", "bye", "hey"};
    iter(strArr, 5, &printVal);
    return (0);
}
