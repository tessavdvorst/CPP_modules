/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:10 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 10:34:23 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0

// Write a program that takes as parameter a string representation of a C++ literal in
// its most common form. This literal must belong to one of the following a scalar types:
// char, int, float or double. Except for char parameters, only the decimal notation will be
// used

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Invalid amount of arguments. Please only insert one literal\n";
        return (1);
    }
    
    Literal lit(argv[1]);
    lit.convert();
    
    return (0);
}
