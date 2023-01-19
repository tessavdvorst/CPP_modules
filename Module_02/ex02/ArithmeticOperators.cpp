/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ArithmeticOperators.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 15:25:56 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/19 15:26:20 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed& fixedNum) const
{
    return (Fixed(this->toFloat() + fixedNum.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixedNum) const
{
    return (Fixed(this->toFloat() - fixedNum.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixedNum) const
{
    return (Fixed(this->toFloat() * fixedNum.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixedNum) const
{
    return (Fixed(this->toFloat() / fixedNum.toFloat())); 
}