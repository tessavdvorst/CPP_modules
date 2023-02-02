/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 16:59:07 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:51:14 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "convert.hpp"
#include "CharLiteral.hpp"

const char* InvalidTypeException::what() const throw()
{
	return "Error: invalid Literal\n";
}

bool onlyOneOfChar(std::string input, char c)
{
	int count = 0;
	
	for(int i = 0; i < (int)input.length(); i++)
	{
		if (input[i] == c)
			count++;
		if (count > 1)
			break;
	}
	if (count != 1)
		return (false);
	return (true);
}

bool isChar(std::string input)
{
    if (input.length() != 1 || std::isdigit(input[0]))
        return (false);
    return (true);
}

bool isInt(std::string input)
{
	int i;
	std::stringstream ss(input);
	
	ss >> i;
	if (ss.eof() && !ss.fail() && !ss.bad() \
			&& i <= std::numeric_limits<int>::max()
			&& i >= std::numeric_limits<int>::min())
		return (true);
	ss.clear();
	return (false);
}

bool isDouble(std::string input)
{
	double d;
	std::stringstream ss(input);
	
	ss >> d;
	if (ss.eof() && !ss.fail() && !ss.bad() \
			&& d <= std::numeric_limits<double>::max()
			&& d >= std::numeric_limits<double>::min())
		return (true);
	ss.clear();
	return (false);
}

bool isFloat(std::string input)
{
	if (!onlyOneOfChar(input, '.')
		|| !onlyOneOfChar(input, 'f')
		|| input[input.length() - 1] != 'f')
		return (false);
	try {
		float f;
		f = std::stof(input);
		return (true);
	} catch (const std::invalid_argument &e) {
		return (false);
	} catch (const std::out_of_range &e) {
		return (false);
	}
}

LitType checkType(std::string input)
{
	if (isChar(input))
		return (CHAR);
	else if (isInt(input))
		return (INT);
	else if (isFloat(input))
		return (FLOAT);
	else if (isDouble(input))
		return (DOUBLE);
	else
		throw InvalidTypeException();
}

ALiteral* newLiteral(LitType type, const std::string input)
{
	ALiteral *lit = NULL;
	
	switch (type)
	{
		case CHAR:
			lit = new CharLiteral(input);
			break;
		// case INT:
		// 	lit = new IntLiteral(input);
		// 	break;
		// case FLOAT:
		// 	lit = new FloatLiteral(input);
		// 	break;
		// case DOUBLE:
		// 	lit = new DoubleLiteral(input);
		// 	break;
		default:
			throw InvalidTypeException();
			break;
	}
	return (lit);
}
