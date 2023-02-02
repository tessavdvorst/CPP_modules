/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ALiteral.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/02 18:54:27 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// 1. You have to first detect the type of the literal passed as parameter

// char -> only a

// 2. convert it from string to its actual type

// 3. then convert it explicitly to the three other data types. 

// 4. Lastly, display the results as shown below.

// error management
// If a conversion does not make any sense or overflows, display a message to inform
// the user that the type conversion is impossible. Include any header you need in order to
// handle numeric limits and special values

#include "ALiteral.hpp"

ALiteral::ALiteral(const std::string input): _input(input) {}

ALiteral::~ALiteral() {}

/*
    WHEN DO I NEED CONVERSION?
    - when initializing TypeLiteral object 
        -----> (ALiteral:: string input -> TypeLiteral:: type value)
    - converting to other Types 
        -----> (TypeLiteral:: type value -> other literals)
*/


// int ALiteral::toInt(void)
// {
    
// }
// double ALiteral::toDouble(void);
// float ALiteral::toFloat(void);

void ALiteral::displayAllConversions(LitType type)
{
    this->toChar();
    // std::cout << "char: " << this->toChar() << "\n";
    // std::cout << "int: " << this->toInt() << "\n";
    // std::cout << "float: " << this->toFloat() << "\n";
    // std::cout << "double: " << this->toDouble() << "\n";
}

