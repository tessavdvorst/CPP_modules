/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 21:46:52 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/19 15:28:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_numOfFracBits = 8;

Fixed::Fixed(): _val(0)
{
    return;
}

Fixed::Fixed(const int val)
{
    setRawBits(val << _numOfFracBits);
    return;
}

Fixed::Fixed(const float val)
{
    setRawBits(roundf(val * (1 << _numOfFracBits)));
    return;
}

Fixed::Fixed(const Fixed& fixedNum) 
{
    *this = fixedNum;
    return;
}

Fixed& Fixed::operator=(const Fixed& fixedNum)
{ 
    this->_val = fixedNum._val;
    return (*this);
}

Fixed::~Fixed() 
{
    return;
}

// conversion functions

float Fixed::toFloat(void) const
{
    float floatNum = (float)this->_val / (1 << this->_numOfFracBits);
    return (floatNum);
}

int Fixed::toInt(void) const
{
    int intNum = this->_val >> this->_numOfFracBits;
    return (intNum);
}

// getter & setter

int Fixed::getRawBits(void) const
{
    return(this->_val);
}

void Fixed::setRawBits(int raw)
{
    this->_val = raw;
}

// insertion operator

std::ostream& operator<<(std::ostream& output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}
