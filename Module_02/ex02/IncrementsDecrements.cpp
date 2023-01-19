/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IncrementsDecrements.cpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 15:27:43 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/19 15:28:11 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator++(void)
{
    setRawBits(getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);
    
    setRawBits(getRawBits() + 1);
    return(copy);
}

Fixed Fixed::operator--(void)
{
    setRawBits(getRawBits() - 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed copy(*this);
    
    setRawBits(getRawBits() - 1);
    return(copy);
}