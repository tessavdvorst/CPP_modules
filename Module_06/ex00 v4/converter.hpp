/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 20:20:32 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 21:42:57 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits.h>
#include <float.h>
#include <math.h>

enum LitType {
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class InvalidTypeException: public std::exception {
    public:
        const char* what() const throw();
};

class OverflowException: public std::exception {
    public:
        const char* what() const throw();
};

void convertFromType(char* input);
void convertFromChar(char c);
void convertFromInt(long int i);
void convertFromFloat(double f);
void convertFromDouble(double d);
#endif
