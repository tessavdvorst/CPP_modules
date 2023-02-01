/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 16:59:07 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/01 19:30:17 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include "CharLiteral.hpp"

const char* InvalidLiteralException::what() const throw()
{
	return "Error: invalid Literal\n";
}

bool isChar(std::string input)
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

// //check min & max & negative values
// bool isInt(void)
// {
//     for (int i = 0; i < (int)this->_input.length(); i++)
//     {
//         if (std::isdigit(this->_input[i]) == 0)
//             return (false);
//     }
//     return (true);
// }

// bool isDouble(void)
// {

// }

// bool isFloat(void)
// {
    
// }

LitType	findType(std::string input)
{
	if (isChar(input))
		return (CHAR);
	else if (isInt(input))
		return (INT);
	else if (isFloat(input))
		return (FLOAT);
	else if (isDouble(input))
		throw InvalidLiteralException();
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
			throw InvalidLiteralException();
			break;
	}
	return (lit);
}
