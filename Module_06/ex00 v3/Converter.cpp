/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:22:53 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 16:25:15 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

const char* Converter::InvalidLiteralException::what() const throw()
{
	return "Error: invalid Literal\n";
}