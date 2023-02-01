/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Literal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 10:42:29 by tvan-der      ########   odam.nl         */
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

#include "Literal.hpp"

Literal::Literal() {}

Literal::Literal(const std::string& input): _input(input) {}

Literal::Literal(const Literal& other): _input(other._input)
{
    *this = other;
}

Literal::~Literal() {}

Literal& Literal::operator=(const Literal& other)
{
    this->_type = other._type;
    return (*this);   
}

bool Literal::setType(void)
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

void Literal::displayConversion(void)
{
    std::cout << "char: " << this->toChar() << "\n";
    std::cout << "int: " << this->toInt() << "\n";
    // std::cout << "float: " << this->toFloat() << "\n";
    // std::cout << "double: " << this->toDouble() << "\n";
}

void Literal::convert(void)
{
    if (!this->setType())
        return ;
    this->toActualType();
    
}

bool Literal::isChar(void)
{
    if (this->_input.length() != 1)
        return (false);
    if (!std::isprint(this->_input[0]))
    {
        this->_cState = NO_DISPLAY;
        return (false);
    }
    return (true);
}

//check min & max & negative values
bool Literal::isInt(void)
{
    for (int i = 0; i < (int)this->_input.length(); i++)
    {
        if (std::isdigit(this->_input[i]) == 0)
            return (false);
    }
    return (true);
}

// bool Literal::isDouble(void)
// {

// }

// bool Literal::isFloat(void)
// {
    
// }

void Literal::toActualType(void)
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

char Literal::toChar(void)
{

}

int Literal::toInt(void)
{
    
}
// double Literal::toDouble(void);
// float Literal::toFloat(void);

