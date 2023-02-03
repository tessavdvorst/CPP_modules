/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 20:20:14 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/03 14:26:56 by tvan-der      ########   odam.nl         */
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
    int i_value = static_cast<int>(i);
    if (i_value > 127)
        std::cout << "char: impossible\n";
    else if (!isprint(static_cast<char>(i_value)))
        std::cout << "char: not displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(i_value) << "'\n";
    std::cout << "int: " << i_value << "\n";
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << static_cast<float>(i_value) << "f\n";
    std::cout << "double: " << std::setprecision(1) << static_cast<double>(i_value) << "\n";
}

void convertFromFloat(long double f)
{
    if (f < -FLT_MAX || f > FLT_MAX)
        throw OverflowException();
    float f_value = f;
    if (!isprint(static_cast<char>(f_value)))
        std::cout << "char: not displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(f_value) << "'\n";
    if (f < INT_MIN || f > INT_MAX)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(f_value) << "\n";
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << f_value << "f\n";
    std::cout << "double: " << std::setprecision(1) << static_cast<double>(f_value) << "\n";
}

void convertFromDouble(double d)
{
    if (d < -DBL_MAX || d > DBL_MAX)
        throw OverflowException();
    if (!isprint(static_cast<char>(d)))
        std::cout << "char: not displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(d) << "'\n";
    if (d < INT_MIN || d > INT_MAX)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(d) << "\n";
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1) << static_cast<float>(d) << "f\n";
    std::cout << "double: " << std::setprecision(1) << d << "\n";
}

void convertInfinite(std::string input, LitType type)
{
    switch (type)
    {
        case DOUBLE:
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: " << input << "f\n";
            std::cout << "double: " << input << "\n";
            break;
        case FLOAT:
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: " << input << "\n";
            std::cout << "double: " << input.substr(0, input.length() - 1) << "\n";
            break;
        default:
            break;
    }
}

void convertFromType(char *input)
{
    char *pEnd;
    std::string input_str = input;

    if (input_str == "nan" || input_str == "-inf" || input_str == "+inf")
    {
        convertInfinite(input_str, DOUBLE);
        return;
    }   
    if (input_str == "nanf" || input_str == "-inff" || input_str == "+inff")
    {
        convertInfinite(input_str, FLOAT);
        return;
    }
    if (strlen(input) == 1 && isprint(input[0]) && !isdigit(input[0]))
    {
        convertFromChar(input[0]);
        return;
    }
    long int int_val = strtol(input, &pEnd, 10);
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
