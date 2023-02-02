/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:10 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/02 18:52:14 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include "CharLiteral.hpp"

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
    
    try {
        LitType type = findType(argv[1]);
        ALiteral* lit = newLiteral(type, argv[1]);
        if (lit)
        {
            lit->displayAllConversions(type);
            delete lit;
        }
    } catch (const std::exception& e) {
        std::cout << e.what();
    }
    system ("leaks a.out");
    return (0);
}
