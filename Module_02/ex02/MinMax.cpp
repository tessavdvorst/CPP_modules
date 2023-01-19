/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MinMax.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 15:27:14 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/19 15:27:23 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::min(Fixed& fixedPoint1, Fixed& fixedPoint2)
{
    if (fixedPoint1 <= fixedPoint2)
        return (fixedPoint1);
    return (fixedPoint2);
}

const Fixed& Fixed::min(const Fixed& fixedPoint1, const Fixed& fixedPoint2)
{
    if (fixedPoint1 <= fixedPoint2)
        return (fixedPoint1);
    return (fixedPoint2);
}

Fixed& Fixed::max(Fixed& fixedPoint1, Fixed& fixedPoint2)
{
    if (fixedPoint1 >= fixedPoint2)
        return (fixedPoint1);
    return (fixedPoint2);
}

const Fixed& Fixed::max(const Fixed& fixedPoint1, const Fixed& fixedPoint2)
{
    if (fixedPoint1 >= fixedPoint2)
        return (fixedPoint1);
    return (fixedPoint2);
}