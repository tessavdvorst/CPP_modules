/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 17:27:26 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/17 18:03:42 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    setRawBits(0);
    std::cout << "Default constructor called\n"; 
}

Fixed::Fixed(const Fixed& other) 
{
    std::cout << "Copy constructor called\n";
    setRawBits(other._val);
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{ 
    std::cout << "Copy assignment operator called\n";
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