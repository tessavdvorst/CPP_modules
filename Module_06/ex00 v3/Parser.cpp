/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Parser.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:27:53 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:31:07 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

Parser::Parser(const std::string input): _input(input)
{
	this->_type = checkType();
}

Parser::~Parser() {}

const char* Parser::InvalidTypeException::what() const throw()
{
	return "Error: invalid Literal\n";
}

bool Parser::onlyOneOfChar(char c)
{
	int count = 0;
	
	for(int i = 0; i < (int)this->_input.length(); i++)
	{
		if (this->_input[i] == c)
			count++;
		if (count > 1)
			break;
	}
	if (count != 1)
		return (false);
	return (true);
}

bool Parser::isChar(void)
{
    if (this->_input.length() != 1 || std::isdigit(this->_input[0]))
        return (false);
    return (true);
}

bool Parser::isInt()
{
	int i;
	std::stringstream ss(this->_input);
	
	ss >> i;
	if (ss.eof() && !ss.fail() && !ss.bad() \
			&& i <= std::numeric_limits<int>::max()
			&& i >= std::numeric_limits<int>::min())
		return (true);
	ss.clear();
	return (false);
}

bool Parser::isDouble(void)
{
	double d;
	std::stringstream ss(this->_input);
	
	ss >> d;
	if (ss.eof() && !ss.fail() && !ss.bad() \
			&& d <= std::numeric_limits<double>::max()
			&& d >= std::numeric_limits<double>::min())
		return (true);
	ss.clear();
	return (false);
}

bool Parser::isFloat(void)
{
	if (!this->onlyOneOfChar('.')
		|| !this->onlyOneOfChar('f')
		|| this->_input[this->_input.length() - 1] != 'f')
		return (false);
	try {
		float f;
		f = std::stof(this->_input);
		return (true);
	} catch (const std::invalid_argument &e) {
		return (false);
	} catch (const std::out_of_range &e) {
		return (false);
	}
}

LitType Parser::checkType(void)
{
	if (isChar())
		return (CHAR);
	else if (isInt())
		return (INT);
	else if (isFloat())
		return (FLOAT);
	else if (isDouble())
		return (DOUBLE);
	else
		throw InvalidTypeException();
}

LitType Parser::getType(void)
{
	return (this->_type);
}
