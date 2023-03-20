/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 13:35:21 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 16:07:41 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const std::string expression): _expression(expression) {}

RPN::RPN(const RPN& that): _expression(that._expression) 
{
	*this = that;
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN& that)
{
	this->_calculation = that._calculation;
	return (*this);
}

bool RPN::is_digit(const char *str)
{
	char *pEnd;
	
	strtol(str, &pEnd, 10);
    if (*pEnd != '\0')
		return (false);
    return (true);
}

void RPN::execute_operation(char c, int a, int b)
{
	switch (c) {
		case '+':
			this->_calculation.push(a + b); 
			break;
		case '-':
			this->_calculation.push(a - b);
			break;
		case '*':
			this->_calculation.push(a * b);
			break;
		case '/':
			if (b == 0)
				throw DivisionByZeroException();
			this->_calculation.push(a / b);
			break;
		default:
			throw BadInputException();
	}
}

void RPN::calculate(void)
{
    std::string token;
	std::istringstream ss(this->_expression);

	while (ss >> token)
	{
		if (token.size() != 1)
			throw BadInputException();
		if (is_digit(token.c_str()))
		{
			int val = token[0] - '0';
			this->_calculation.push(val);
		}
		else
		{
			if (this->_calculation.empty()) 
				throw InvalidCalculationException();
			int b = this->_calculation.top();
			this->_calculation.pop();
			if (this->_calculation.empty()) 
				throw InvalidCalculationException();
			int a = this->_calculation.top();
			this->_calculation.pop();
			execute_operation(token[0], a, b);
		}
	}
	std::cout << this->_calculation.top() << '\n';
}
