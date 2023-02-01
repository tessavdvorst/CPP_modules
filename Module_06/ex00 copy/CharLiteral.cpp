/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CharLiteral.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 15:26:41 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 15:41:54 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "CharLiteral.hpp"

CharLiteral::CharLiteral(const char c, const std::string input): 
                        Literal(input),
                        _c(c) {}

CharLiteral::~CharLiteral() {}


