/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CharLiteral.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 15:26:41 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/02 18:55:42 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "CharLiteral.hpp"

CharLiteral::CharLiteral(const std::string input): ALiteral(input)
{
	this->toActualType();
}

CharLiteral::~CharLiteral() {}

void CharLiteral::toChar(void)
{
	std::cout << "char: ";
	if (!isprint(this->_c))
		std::cout
	this->_c);
}

// int CharLiteral::toInt(void)
// {
// 	return (this->_c);
// }

void CharLiteral::toActualType(void)
{
	if (!std::isprint(this->_input[0]))
		this->_state = NO_DISPLAY;
	this->_c = this->_input[0];
}