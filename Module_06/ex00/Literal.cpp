/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Literal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/31 17:34:52 by tvan-der      ########   odam.nl         */
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

// void Literal::displayType(void)
// {
//     std::cout << "char: " << this->toChar() << "\n";
//     std::cout << "int: " << this->toInt() << "\n";
//     std::cout << "float: " << this->toFloat() << "\n";
//     std::cout << "double: " << this->toDouble() << "\n";
// }

void Literal::convert(void)
{
    if (!this->findType())
        return ;
    std::cout << this->_type << "\n";
}


bool Literal::isChar(void) const
{
    if (this->_input.length() == 1 && std::isalpha(this->_input[0]) == 1)
        return (true);
    return (false);
}

bool Literal::isInt(void) const
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
    this->findType();
}

// char Literal::toChar(void);
// int Literal::toInt(void);
// double Literal::toDouble(void);
// float Literal::toFloat(void);

// std::ostream& operator<<(std::ostream& output, const Literal& literal)
// {
//    output << "char: " << literal.toChar() << "\n";
//    output << "int: " << literal.toInt() << "\n";
//    output << "float: " << literal.toFloat() << "\n";
//    output << "double: " << literal.toDouble() << "\n";
//    return (output);
// }

