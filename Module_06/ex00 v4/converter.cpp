/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 20:20:14 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 21:50:04 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

const char* InvalidTypeException::what() const throw()
{
	return "invalid type literal";
}

const char* OverflowException::what() const throw()
{
	return "type overflow";
}

void convertFromChar(char c)
{
    std::cout << "char: '" << c << "'\n";
    std::cout << "int: " << static_cast<int>(c) << "\n";
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << static_cast<float>(c) << "f\n";
    std::cout << "double: " << std::setprecision(1) << static_cast<double>(c) << "\n";
}

void convertFromInt(long int i)
{
    if (i < INT_MIN || i > INT_MAX)
        throw OverflowException();
    if (!isprint(static_cast<char>(i)))
        std::cout << "char: not displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(i) << "'\n";
    std::cout << "int: " << i << "\n";
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << static_cast<float>(i) << "f\n";
    std::cout << "double: " << std::setprecision(1) << static_cast<double>(i) << "\n";
}

void convertFromFloat(double f)
{
    if (f < FLT_MIN || f > FLT_MAX)
        throw OverflowException();
    if (isnan(f) || isfinite(f) || isinf(f))
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
    }
    else
    {
        if (!isprint(static_cast<char>(f)))
            std::cout << "char: not displayable\n";
        else
            std::cout << "char: '" << static_cast<char>(f) << "'\n";
        std::cout << "int: " << static_cast<int>(f) << "\n";
    }
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << f << "f\n";
    std::cout << "double: " << std::setprecision(1) << static_cast<double>(f) << "\n";
}

void convertFromDouble(double d)
{
    if (d < DBL_MIN || d > DBL_MAX || !isinf(d))
        throw OverflowException();
    if (isnan(d))
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
    }
    else
    {
        if (!isprint(static_cast<char>(d)))
            std::cout << "char: not displayable\n";
        else
            std::cout << "char: '" << static_cast<char>(d) << "'\n";
        std::cout << "int: " << static_cast<int>(d) << "\n";
    }
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << static_cast<float>(d) << "f\n";
    std::cout << "double: " << std::setprecision(1) << d << "\n";
}

void convertFromType(char *input)
{
    char *pEnd;
    
    if (strlen(input) == 1 && isprint(input[0]) && !isdigit(input[0]))
    {
        convertFromChar(input[0]);
        return;
    }
    long int_val = strtol(input, &pEnd, 10);
    if (*pEnd == '\0')
    {
        convertFromInt(int_val);
        return;
    }
    double double_val = strtod(input, &pEnd);
    if (*pEnd == 'f' && *(pEnd + 1) == '\0')
    {
        convertFromFloat(double_val);
        return;
    }
    if (*pEnd == '\0')
    {
        convertFromDouble(double_val);
        return;
    }
    throw InvalidTypeException();
}
