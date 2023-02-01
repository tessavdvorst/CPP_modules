/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 16:59:05 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/01 18:04:59 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>

class ALiteral;

enum LitType {
    CHAR,
    INT,
    DOUBLE,
    FLOAT
};

enum ConversionState {
    SET,
    IMPOS,
    NO_DISPLAY
};

class InvalidLiteralException: public std::exception {
    public:
        const char* what() const throw();
};

LitType	findType(std::string input);
bool	isChar(std::string input);
bool	isInt(void);
// bool	isDouble(void);
// bool	isFloat(void);

ALiteral* newLiteral(LitType type, const std::string input);

#endif
