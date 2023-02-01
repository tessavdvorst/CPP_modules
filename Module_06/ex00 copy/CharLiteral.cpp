/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CharLiteral.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 15:26:41 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 18:05:07 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "CharLiteral.hpp"

CharLiteral::CharLiteral(const std::string input):
										ALiteral(input),
										_c(this->toChar()) {}

CharLiteral::~CharLiteral() {}


