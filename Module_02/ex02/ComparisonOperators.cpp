/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ComparisonOperators.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 15:26:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/19 15:26:55 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& fixedNum) const
{ 
    if (this->_val > fixedNum.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed& fixedNum) const
{ 
    if (this->_val < fixedNum.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& fixedNum) const
{
    if (this->_val >= fixedNum.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& fixedNum) const
{ 
    if (this->_val <= fixedNum.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& fixedNum) const
{ 
    if (this->_val == fixedNum.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& fixedNum) const
{ 
    if (this->_val != fixedNum.getRawBits())
        return (true);
    return (false);
}