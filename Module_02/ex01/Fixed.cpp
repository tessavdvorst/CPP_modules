/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 11:57:23 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/18 16:23:49 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _val(0)
{
    std::cout << "Default constructor called\n"; 
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called\n";
    setRawBits(val << _numOfFracBits);
    return;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called\n";
    setRawBits(roundf(val * (1 << _numOfFracBits)));
    return;
}

Fixed::Fixed(const Fixed& other) 
{
    std::cout << "Copy constructor called\n";
    *this = other;
    return;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called\n";
    return;
}

Fixed& Fixed::operator=(const Fixed& other)
{ 
    std::cout << "Copy assignment operator called\n";
    this->_val = other._val;
    return (*this);
}

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

int Fixed::getRawBits(void) const
{
    return(this->_val);
}

void Fixed::setRawBits(int raw)
{
    this->_val = raw;   
}

std::ostream& operator<<(std::ostream& output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}