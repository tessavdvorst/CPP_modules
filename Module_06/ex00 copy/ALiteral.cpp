/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ALiteral.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 19:18:39 by Tessa         ########   odam.nl         */
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

ALiteral::ALiteral(const ALiteral& other):
{

    
}

ALiteral::~ALiteral() {}


ALiteral& ALiteral::operator=(const ALiteral& other)
{
    *this = other;
}

bool ALiteral::setType(void)
{
    if (this->isChar())
        this->_type = CHAR;
    else if (this->isInt())
        this->_type = INT;
    // else if (this->isFloat())
    //     this->_type = FLOAT;
    // else if (this->isDouble())
    //     this->_type = DOUBLE;
    else
    {
        std::cerr << "Error: conversion failed\n";
        return (false);
    }
    return (true);
}

void ALiteral::displayConversion(void)
{
    std::cout << "char: " << this->toChar() << "\n";
    std::cout << "int: " << this->toInt() << "\n";
    // std::cout << "float: " << this->toFloat() << "\n";
    // std::cout << "double: " << this->toDouble() << "\n";
}

void ALiteral::convert(void)
{
    if (!this->setType())
        return ;
    this->toActualType();
    
}



void ALiteral::toActualType(void)
{
    switch (this->_type)
    {
        case CHAR:
            this->_c = this->toChar();
            this->_cState = SET;
            break;
        case INT:
            this->_i = this->toInt();
            this->_iState = SET; 
            break;
        // case FLOAT:
        //     this->_f = this->toFloat();
        //     break;
        // case DOUBLE:
        //     this->_d = this->toDouble();
        //     break;
        default:
            break;
    }
}

char ALiteral::toChar(void)
{

}

int ALiteral::toInt(void)
{
    
}
// double ALiteral::toDouble(void);
// float ALiteral::toFloat(void);

