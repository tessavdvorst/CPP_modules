/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 17:27:26 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/18 14:30:47 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n"; 
    setRawBits(0);
    return;
}

Fixed::Fixed(const Fixed& fixedNum) 
{
    std::cout << "Copy constructor called\n";
    *this = fixedNum;
    return;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called\n";
    return;
}

Fixed& Fixed::operator=(const Fixed& fixedNum)
{ 
    std::cout << "Copy assignment operator called\n";
    setRawBits(fixedNum.getRawBits());
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}