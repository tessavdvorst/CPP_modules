/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 21:46:52 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/18 22:35:23 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _val(0)
{
    // std::cout << "Default constructor called\n"; 
}

Fixed::Fixed(const int val)
{
    // std::cout << "Int constructor called\n";
    setRawBits(val << _numOfFracBits);
    return;
}

Fixed::Fixed(const float val)
{
    // std::cout << "Float constructor called\n";
    setRawBits(roundf(val * (1 << _numOfFracBits)));
    return;
}

Fixed::Fixed(const Fixed& other) 
{
    // std::cout << "Copy constructor called\n";
    *this = other;
    return;
}

Fixed::~Fixed() 
{
    // std::cout << "Destructor called\n";
    return;
}

Fixed& Fixed::operator=(const Fixed other)
{ 
    // std::cout << "Copy assignment operator called\n";
    this->_val = other._val;
    return (*this);
}

bool Fixed::operator>(const Fixed other)
{ 
    if (this->_val > other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed other)
{ 
    if (this->_val < other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed other)
{
    if (this->_val >= other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed other)
{ 
    if (this->_val <= other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed other)
{ 
    if (this->_val == other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed other)
{ 
    if (this->_val != other.getRawBits())
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed other)
{
    Fixed newFixedPoint;
    newFixedPoint.setRawBits(this->_val + other.getRawBits());
    return (newFixedPoint);
}

Fixed Fixed::operator-(const Fixed other)
{
    Fixed newFixedPoint;
    newFixedPoint.setRawBits(this->_val - other.getRawBits());
    return (newFixedPoint);
}

Fixed Fixed::operator*(const Fixed other)
{
    Fixed newFixedPoint;
    newFixedPoint.setRawBits(this->_val * other.getRawBits());
    std::cout << "this val = " << this->_val << std::endl; 
    std::cout << "other val = " << other.getRawBits() << std::endl; 
    std::cout << "multiplication = " << newFixedPoint.getRawBits() << std::endl; 
    return (newFixedPoint);
}

Fixed Fixed::operator/(const Fixed other)
{
    Fixed newFixedPoint;
    newFixedPoint.setRawBits(this->_val / other.getRawBits());
    return (newFixedPoint);
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

// Fixed& Fixed::min(Fixed& fixedPoint1, Fixed& fixedPoint2)
// {
    
// }

// Fixed& Fixed::min(const Fixed& fixedPoint1, const Fixed& fixedPoint2)
// {

// }

// Fixed& Fixed::max(Fixed& fixedPoint1, Fixed& fixedPoint2)
// {

// }

// Fixed& Fixed::max(const Fixed& fixedPoint1, const Fixed& fixedPoint2)
// {

// }

std::ostream& operator<<(std::ostream& output, const Fixed &fixed)
{
    // output << fixed.toFloat();
    output << fixed.toInt();
    return (output);
}

